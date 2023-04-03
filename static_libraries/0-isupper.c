#include "main.h"

/**
* _isupper - check if num=[0-9]
* @c: int
* Return: Always 0 (Success)
*/

int _isupper(int c)
{
if (c > 64 && c <= 90)
return (1);
else
return (0);
}
