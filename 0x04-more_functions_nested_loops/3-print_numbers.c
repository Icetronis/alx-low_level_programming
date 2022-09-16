#include"main.h"

/**
 * *print_numbers - Prints the number 0 to 9
 * *Return: Always 0 (Success)
 */

void print_numbers(void)

{
	int i;

	i = 0;

	for (i = 0; i < 10; i++)

	_putchar(i + '0');
	_putchar ('\n');
}
