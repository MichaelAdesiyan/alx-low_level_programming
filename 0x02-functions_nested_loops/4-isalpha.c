#include "main.h"
/**
*  _isalpha - fucnction that check alphabet
*  @c: character
*  Return: always 1 or 0
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
