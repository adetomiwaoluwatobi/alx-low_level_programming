#include<stdio.h>
/**
 * main - main Entry point of the code
 * Code to check the sizeof datatype
 * Return: return 0 after program execution
 */
int main(void)
{
	printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("size of an int: %d byte(s)\n", sizeof(int));
	printf("Size of a long int: %d byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
	printf("Size of a float: %d byte(s)\n", sizeof(float));
	return (0);
}
