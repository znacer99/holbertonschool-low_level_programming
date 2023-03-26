#include <stdio.h>

char *_strpbrk(char *, char *);

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	char *s = "First, solve the problem. Then, write the code.";
	char *f = "Holberton";
	char *t;

	t = _strpbrk(s, f);
	printf("%s\n", (t == NULL ? "nil" : t));
	return (0);
}
