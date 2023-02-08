#include "palindrome.h"
/**
 * reverse_number - reverse number
 * @s: unsigned long s
 * Return: Reversed number
 */

int reverse_number(unsigned long s)
{
	unsigned long r = 0;

	while (s != 0)
	{
		r = r * 10;
		r = r + n%10;
		n = n/10;
	}

	return (r);
}

int is_palindrome(unsigned long s)
{
	unsigned long r = reverse_number(s);

	if ((int)s == (int)r)
		return (1);
	else
		return (0);
}
