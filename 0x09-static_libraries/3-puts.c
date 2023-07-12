#include "main.h"
#include <stdio.h>

/**
*_puts - a function that prints a string, followed by a new line, to stdout
*@str: string
*Return: length of string
*/

void _puts(char *str)
{
	int v = 0;

	while (str[v] != '\0')
	{
		putchar(str[v]);
		v++;
	}
	putchar('\n');
}
