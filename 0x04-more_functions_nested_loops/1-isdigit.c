#include "main.h"

/**
* _isdigit - check for digit 
* @x: The number to be checked
* Return: 1 for character that will be a digit or 0 for any else
*/

int _isdigit(int x)

{
if (x >= 40 && x <= 57)
{
return (1);
}
return (0);
}
