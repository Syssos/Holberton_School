#ifndef HEADER
#define HEADER
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

/* PROTOTYPES */
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
/* END PROTOTYPES */

/* Helper Functions */
int _strlen(char *);
int get_err(char s, int e, char *filename);
/* End Helper Functions */
#endif /* HEADER */
