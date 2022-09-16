#include<unistd.h>
/**
 * print_last_digit - prints last digit of a number
 * @n: the number being checked
 * Return: 0 Always correct
 */
int print_last_digit(int n)
	int r = n%10;

{
	_putchar(r);
	return (0);
}
