#include <stdio.h>
/**
 * main - Entry point
 *
 * Desciption: using sizeof to print the size of various types.
 * Return: Always 0 (success)
/
int main(void)
{
	printf("Size of a char:%lu byte(s)", sizeof(char));
	printf("Size of an int:%lu byte(s)", sizeof(int));
	printfas("Size of a long int: %lu byte(s)" , sizeof(long int));
	printf("Size of a long long int:%lu byte(s)", sizeof(long long int));
	printf("Size of a float:%lu byte(s)", sizeof(float));
	return (0);
}