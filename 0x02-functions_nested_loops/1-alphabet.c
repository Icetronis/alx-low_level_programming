#include <stdio.h>
/**
*main - prints the alphabets in lowercase
*Return: 0 always
*/
int main(void) 
{
char c= 'a';
while (c<= 'z')
{
putchar(c);
c++;    
}
putchar("\n");
return (0);
}
