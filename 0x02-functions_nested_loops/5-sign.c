#include<unistd.h>

/**
 * print_sign - prints the sign of a number
 * Return:1 prints + if n> zero 0 if n==0  -1 if n<0
 * @n:the number bring tested
 */

int print_sign(int n)

{
	if (n > 0)
	_putchar('+');
	return (1);
	else if (n == 0)
	_putchar('0');
	return (0);
	else if (n < 0)
	_putchar('-');
	return (-1);
}
