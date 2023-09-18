#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * Keegan and Llala have done this code
 * Return: Always 0 (Success)
 */
int main(void)
{
        int l = -8;
        char c = 'e';
        char *s = "_printf is kicking ass!";

        print_num(l);
        printf("\n");
        print_char(c);
        printf("\n");
        print_string(s);
        printf("\n");

        return (0);
}
