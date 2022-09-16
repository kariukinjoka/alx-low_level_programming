#include<unistd.h>

/**
 *_abs - computes absolute value
 *@n:the number being checked
 *Return: Always 0
 */

int _abs(int n)

{
	if (n < 0)
{
	return (-n);
}
else
{
	return (n);
}
	return (0);
}
