#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
* main - main block
* Description: prints all single digit number of base 10
* starting from 0, followed by new line.
* Return: 0
*/

int main(void)
{
int c = 0;

while (c < 10)
{
putchar(48 + c);
if (c != 9)
{
putchar(',');
putchar(' ');
}
c++;
}
putchar('\n');
return (0);
}