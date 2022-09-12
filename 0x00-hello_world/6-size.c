#include<stdio.h>
/**
 * main -Entry Point
 *
 * Return: Always 0 (success)
 */

int main ()
{
	char c;
	int i;
	long l;
	long long ll;
	float f;
	printf("The size of Character is: %lu\n", (unsigned long)sizeof(c));
	printf("The size of Integers is: %lu\n", (unsigned long)sizeof(i));
	printf ("The size of long is: %lu\n", (unsigned long)sizeof(l));
	printf("The size of Long Long is: %lu\n", (unsigned long)sizeof(ll));
        printf("The size of Float is: %lu\n", (unsigned long)sizeof(f));
	return (0);
}
