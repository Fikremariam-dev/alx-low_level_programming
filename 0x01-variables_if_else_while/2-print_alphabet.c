#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num, p;
	num = 97;
	while (num <= 122)
		putchar(num);
	num++;
	p = 97;
	while (p <= 122)
	{
		putchar(p);
		p++;
	}
	putchar('\n');
	return (0);
}
