//#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//program 9.8 binary.c
void to_binary(unsigned long n);
int main(void)
{
	unsigned long number;
	printf("Enter an integer(q to quit):\n");
	while (scanf("%ul", &number) == 1)
	{
		printf("Biandinary equivalent:");
		to_binary(number);
		putchar('\n');
		printf("Enter an integer(q to quit):");
	}
	printf("Done.\n");
	return 0;
}
void to_binary(unsigned long n)
{
	int r;
	r = n % 2;
	if (n >= 2)
		to_binary(n / 2);
	putchar('0' + r);
	return;
}