#include "main.h"

/**
 * *print_most_numbers - Prints except 2 and 4
 * *Return: Always 0 (Success)
 */

void print_most_numbers(void)
{
	int n = 0;

	while (n <= 9)
	{
		if (n != 2 && n != 4)

		{
			_putchar('0' + n);
		}
		n++;
	}
	_putchar('\n');

}
