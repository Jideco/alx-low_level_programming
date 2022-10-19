#include <stdio.h>
/**
 * main - print alphabet reversed using putchar
 * Return: Alway 0 (Successs)
 */
int main(void)
{
	char alpha = 'z';

	while (alpha >= 'a')
	{
		putchar(alpha);
		alpha--;
	}
	putchar('\n');

	return (0);
}
