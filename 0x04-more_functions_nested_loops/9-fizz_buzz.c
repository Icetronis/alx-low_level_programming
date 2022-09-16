#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 * Return: void
 */

int main(void)

{
	int i;

	for (i = 1; i <= 100; i++)

	{
		if (i % 3 == 0 && i % 5 != 0)

		{
			printf("Fizz");
		}

		else if (i % 3 != 0 && i % 5 == 0)

			printf("Buzz");
	}

	else if (i % 3 == 0 && i % 5 == 0)

	{
		printf("FizzBuzz");
	}

	else

	{
		printf("%d", i);
	}

	if (i != 100)

		putchar(' ');

	else
		putchar('\n');


return (0);

}
