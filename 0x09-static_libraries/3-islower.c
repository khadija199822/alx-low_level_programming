#include"main.h"
/**
 * _islower - function to check is character is lowercase
 * @c: checks input of function
 * Return: returns 1 if 'c' is lowercase otherwise is 0
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
