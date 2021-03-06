#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdlib.h>
#include <stdio.h>

/* PROTOTYPES */

unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int _putchar(char c);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);

/* END PROTOTYPES */

/* EXTRA PROTOTYPES */

int get_endianness(void);

/* END EXTRA PROTOTYPES */
#endif /* HOLBERTON_H */
