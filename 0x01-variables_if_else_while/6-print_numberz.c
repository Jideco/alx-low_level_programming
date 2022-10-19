#include <stdio.h>

/**
 * main - print 01234567 using putchar
 * Return: always 0 (Success)
 */

int main(void)
{
	int n = '0';

	while (n <= '9')
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
