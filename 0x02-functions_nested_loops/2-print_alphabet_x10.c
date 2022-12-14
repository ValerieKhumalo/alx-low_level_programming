#include "main.h"

/**
 * print_alphabet_x10 - prints the lowercase alphabets
 */

void print_alphabet_x10(void)
{
	int letter;
	int y;

	for (y = 0; y < 10; y++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
}
