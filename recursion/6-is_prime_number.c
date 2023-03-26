#include "main.h"

/**
 * check_prime_number - check if the number is prime
 * @i: int
 * @n: int
 * Return: 1 if prime , 2 if not
 */

int check_prime_number(int i, int n)
{
	if (n <= 1)
		return (0);
	if (n <= i)
		return (1);
	if (n % i == 0)
		return (0);
	return (check_prime_number(i + 1, n));
}

/**
 * is_prime_number - check if the number is prime
 * @n: int to check
 * Return: 1 if prime , 2 if not
 */

int is_prime_number(int n)
{
	return (check_prime_number(2, n));
}
