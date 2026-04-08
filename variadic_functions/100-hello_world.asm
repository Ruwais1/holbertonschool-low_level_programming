global main

section .data
    msg db "Hello, World", 10   ; 10 is the ASCII code for a new line (\n)
    len equ $ - msg             ; Automatically calculate the length of the string

section .text
main:
    ; Setup for write(1, msg, len) syscall
    mov rax, 1                  ; System call number for sys_write (1)
    mov rdi, 1                  ; File descriptor 1 (Standard Output)
    mov rsi, msg                ; Address of the string to output
    mov rdx, len                ; Length of the string
    syscall                     ; Invoke the operating system

    ; Setup for return 0 from main
    mov rax, 0                  ; Set return value to 0
    ret                         ; Return to C runtime (equivalent to return 0 in C)
