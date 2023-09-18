#include "main.h"
#include <unistd.h>

/**
 * print_char - function that prints a character
 * @c: character to print
 * Return: printed character
 */
int print_char(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_string - function that prints a string
 * @s: pointer to string to print
 * Return: printed string
 */
int print_string(char *s)
{
	int len = 0;

	if (s == NULL)
		return (-1);
	while (*s)
	{
		len++;
		s++;
	}
	return (write(1, (s - len), len));
}

/**
 * print_num - function that prints a number
 * @d: number to print
 *
 * Return: printed number
 */
int print_num(int d)
{
	int l = 0, rev = 0, ver;
	char positive[11];
	char tmp;

	if (d == 0)
	{
		positive[l] = '0';
		l++;
	}
	else
	{
		if (d < 0)
		{
			positive[l] = '-';
			l++;
			d = -d;
		}
		while (d > 0)
		{
			positive[l] = (d % 10) + '0';
			d /= 10;
			l++;
		}
	}
	positive[l] = '\0';
	ver = l - 1;

	if (positive[0] == '-')
		rev = 1;

	while (rev < ver)
	{
		tmp = positive[rev];
		positive[rev] = positive[ver];
		positive[ver] = tmp;
		rev++;
		ver--;
	}
	return (write(1, positive, l));
}

/**
 * print_perc - function that prints a percentage sign
 *
 * Return: percentage sign printed to stdout
 */
int print_perc(void)
{
	return (write(1, "%%", 1));
}

