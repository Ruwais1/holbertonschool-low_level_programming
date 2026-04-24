#ifndef MAIN_H
#define MAIN_H

/* Standard Libraries for File I/O and Error Handling */
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/* Task 0: Read a text file and print it to POSIX standard output */
ssize_t read_textfile(const char *filename, size_t letters);

/* Task 1: Create a file with specific permissions and content */
int create_file(const char *filename, char *text_content);

/* Task 2: Append text to the end of a file */
int append_text_to_file(const char *filename, char *text_content);

#endif /* MAIN_H */
