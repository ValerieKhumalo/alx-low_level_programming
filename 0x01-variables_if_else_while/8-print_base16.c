#include <stdio.h>

/**
 * main - prints the numbers in base 16
 * Return: Always 0
 */
int main(void)
{
	int num;
	char li;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	for (li = 'a'; li <= 'f'; li++)
		putchar(li);

	putchar('\n');

	return (0);
}
