#include "main.h"
/**
*main - prints the alphabets in lowercase
*Return: 0 always
*/
void print_alphabet(void) 
{
char c= 'a';
while (c<= 'z')
{
_putchar(c);
c++;    
}
_putchar("\n");
return (0);
}
