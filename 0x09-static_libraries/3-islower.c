#include "main.h"
/**
 * _islower - functions checkes for lowercase chareacter
 **@c: letter being tested @c: letter being tested
 * Return: Always retune 0 or 1.
 */
int _islower(int c)
{
	int value = c;

	if (value >= 'a' && value <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
