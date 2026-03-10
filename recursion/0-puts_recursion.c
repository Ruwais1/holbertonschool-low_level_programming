#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line.
 * @s: pointer to the string to be printed.
 *
 * Return: void.
 */
void _puts_recursion(char *s)
{
    /* Base Case: If we reach the null terminator '\0' */
    if (*s == '\0')
    {
        _putchar('\n');
        return;
    }

    /* Print the current character pointed to by s */
    _putchar(*s);

    /* Recursive Call: Move to the next character (s + 1) */
    _puts_recursion(s + 1);
}
