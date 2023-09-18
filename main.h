#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>

int _printf(const char *format, ...);
int print_char(char c);
int print_string(char *s);
int print_num(int d);
int print_perc(void);

#endif
