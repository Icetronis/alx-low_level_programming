#include "main.h"

/**
 *_isdigit - checkes if the no is 0 to 9
 * *@c: inputs
 * *Return: 1 if is digit, 0 if not
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
