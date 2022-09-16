#include<unistd.h>

/**
 *_isalpha - checks if a character is uppercase
 *@c: Letter being checked
 *Return:1 if correct 0 if incorrect
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
