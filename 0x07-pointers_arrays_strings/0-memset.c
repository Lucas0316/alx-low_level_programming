#include "main.h"

/**
 * _memset - Fills in memory with constant bytes
 * @s: Location to be filled
 * @b: Char to fill location
 * @n: Num of Bytes to be filled
 *
 * Return: pointer to memory block
 */

char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}
