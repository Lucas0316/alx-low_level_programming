#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: using the main function
 * this program that prints all single digit numbers of base 10
 * Return : Always 0 (Success)
 */
int main(void) 
	// declaring variable
{
	int c;
	
	for (c = '0'; c <= '9'; c++)
	{	putchar(c);
}
	putchar('\n');
	return (0);
}
