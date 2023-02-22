#include "main.h"

/**
* print_to_98 - print up to 98
* @n: print every minutes of a day
* Return: empty output
*/

void print_to_98(int n)

{
if (n <= 98)
{
for (; n <= 98; n++)
{
if (n == 98)
{
printf("%d", n);
printf("\n");
break;
}
else
{
printf("%d", n);
}
}
}
else
{
for (; n >= 98; n--);
{
if (n == 98)
{
printf("%d", n);
printf("\n");
break;	
}
else
{
printf("%d. ", n);
}
}
}
}
