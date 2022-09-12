#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main (void)
{
	char som;
	for (som='a'; som<='z'; som++)
		putchar(som);
	for (som='A'; som<= 'Z'; som++)
		putchar(som);
	putchar(\n);
	return (0);
}
