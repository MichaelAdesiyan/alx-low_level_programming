#include "main.h"
/**
 *  _islower - checking the lower characers
 * @c: the character
 * Return: if success return 1 else 0
**/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
