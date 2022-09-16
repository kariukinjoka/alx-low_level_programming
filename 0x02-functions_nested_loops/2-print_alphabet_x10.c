#include<unistd.h>
/**
 *print_alphabet_x10 - prints the alphabets x10
 *
 *Return: Always 0
 */
void print_alphabet_x10(void)
{
int a, alph;

for (a = 0; a < 10; a++)
{
	for (alph = 'a'; alph <= 'z'; alph++)
{
	_putchar(alph);
}
	_putchar('\n');
}
	return (0);
}
