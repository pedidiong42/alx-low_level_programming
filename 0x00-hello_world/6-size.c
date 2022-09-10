#include <stdio.h>

/**
 * main - Entry point
 * Description: using the main printf function
 * this program that prints the size of various types on computer and compiled
 * Return: Always 0 (Success)
*/
int main(void)
{
	printf("Size of a char: %zu byte(s)\n", sizeof(char));
	printf("Size of an int: %zu byte(S)\n", sizeof(int));
	printf("Size of long int: %zu byte(s)\n", sizeof(long int));
	printf("Size of long long int: %zu byte(S)\n", sizeof(long long int));
	printf("Size of a float: %zu byte(s)\n", sizeof(float));
	return (0);
}
