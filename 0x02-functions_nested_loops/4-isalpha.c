#include "main.h"
/**
 * _isalpha - functions checkes for lowercase chareacter
 *@c: letter being tested
 * Return: Always retune 0 or 1.
 */
int _isalpha(int c)
{
	int value = c;

	if ((value >= 'a' && value <= 'z') || (value >= 'A' && value <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
