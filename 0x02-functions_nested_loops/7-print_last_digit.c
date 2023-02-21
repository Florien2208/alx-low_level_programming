#include "main.h"

/**
* print_last_digit - check for last digit 
* @n: print alphabet - make the alphabet
* Return: return the value of last digit
*/

int print_last_digit(int n)

{
int last;

last = n % 10;
if (last < 0)
{
last = last * -1;
}
_putchar(last + '0');
return (last);
}
