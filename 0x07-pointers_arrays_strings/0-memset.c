#include "main.h"

/**
 * _memset - fill a block of memory with a value
 * @s: starting adress of memory
 * @b: the value
 * @n: number of bytes to be modified
 *
 * Return: changed array with the new value
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
