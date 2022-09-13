#include "main.h"
/**
*print_alphabet - prints the abc
*Return: 0 always
*/
void print_alphabet(void) 
{
char c = 'a';
while (c <= 'z')
{
_putchar(c);
c++;    
}
_putchar("\n");
return (0);
}
