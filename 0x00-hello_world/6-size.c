#include <stdio.h>

/**
 * main - main function
 *
 * Return: 0 on success
 * /

int main(void)
{
	int intType;
	float floatType;
	long longType;
	long long longlongintType;
	char charType;

	// sizeof refers the size of a variable
	printf("Size of a char: %lu byte\n", sizeof(charType));
	printf("Size of int: %lu byte\n", sizeof(intType));
	printf("Size of a long int: %lu byte\n", sizeof(longintTypr));
	printf("Size of a long long int: %lu byte\n", sizeof(longlongintType));
	printf("Size of a float: %lu byte(s)", sizeof(floatType));
	return (0);
}

