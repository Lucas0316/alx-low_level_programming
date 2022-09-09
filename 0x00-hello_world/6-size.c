#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	char b;
	float c;
	long int d;
	long long int e;

	printf("Size of int: %zu byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of char: %zu byte(s)\n", (unsigned long)sizeof(b));
        printf("Size of a float: %zu byte(s)\n", (unsigned long)sizeof(c));
        printf("Size of a long int: %zu byte(s)\n", (unsigned long)sizeof(d));
        printf("Size of a long long int: %zu byte(s)\n", (unsigned long)sizeof(e));
        return (0);
}	
