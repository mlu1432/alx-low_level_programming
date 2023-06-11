#include "main.h"
/**
 * _atoi - convert a string into an integer.
 *
 * @s: string to convert.
 *
 * Return: converted integer.
 */
int _atoi(char *s)
{
	int sign = 1;
	int r = 0;
	unsigned int res = 0;

	while (!(s[r] <= '9' && s[r] >= '0') && s[r] != '\0')
	{
		if (s[r] == '-')
			sign *= -1;
		r++;
	}
	while (s[r] <= '9' && (s[r] >= '0' && s[r] != '\0'))
	{
		res = (res * 10) + (s[r] - '0');
		r++;
	}
	res *= sign;
	return (res);
}
