#include "main.h"
#include <stdio.h>
/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 * followed by a new line
*/

void print_alphabet_x10(void)
{
	int i = 0;
	char alphabet;

	while (i <= 9)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			_putchar(alphabet);
		}
		_putchar('\n');
		i++;
	}
}
