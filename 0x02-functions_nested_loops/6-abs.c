#include "main.h"

/**
* _abs  - check for absolute
* @c: print alphabet - make the alphabet
* Return: absolute value of number or zero
*/

int _abs(int c)

{
if (c < 0)
{
int abs_val;

abs_val = c * -1;
return (abs_val);
}
return (c);
}
