#include "main.h"
/**
 * main - check the code
 * print_alphabets in lowercase
 *
 * Return: Always 0
 */
void print_alphabet(void)
{
	char alpha;

	alpha = 'a';

	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}

	_putchar('\n');
}
