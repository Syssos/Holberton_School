#include "holberton.h"
/**
 * helper - helps find if prime
 * @f: starting int
 * @n: intager
 * Return: 0 if prime, 1 if not
**/
int helper(int f, int n)
{
	if (n <= 1)
		return (0);
	if (f < n)
	{
		if (n % f == 0)
			return (0);
		return (helper(f + 1, n));
	}
	return (1);
}
/**
 * is_prime_number - finds if prime
 * @n: intager
 * Return: 0 or 1
 **/
int is_prime_number(int n)
{
	return (helper(2, n));
}

