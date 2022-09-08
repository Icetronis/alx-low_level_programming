#include<stdio.h>
/**
*main- is the entry point for program.
*
*Retrun 0 if no error, Non-0 if errors.
*/
int main(void)
{
printf("Size of a char: %lu byte(s)\n", sizeof(char));
printf("size of an int: %lu byte(s)\n", sizeof(int));
printf("size of an double:%lu byte(s)\n", sizeof(double));
printf("size of a long int: %lu byte(s)\n", sizeof(long int));
printf("size of a long long int: %lu byte(s)\n", sizeof(long long int));
printf("size of a float:%lu byte(s)\n", sizeof(float));
return (0);
}
