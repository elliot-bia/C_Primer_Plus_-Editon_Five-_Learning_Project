#include <stdio.h>
#include "hotel.h"
int menu(void)
{
	int code, status;
	printf("\n%s%s\n", STARS, STARS);
	printf("Enter the number of the desired hotel:\n");
	printf("1) Fairfield Arms      2) Hotel Olympic\n");
	printf("3) Chertworthy Plaza   3) The Stockton\n");
	printf("5) Quit\n");
	printf("\n%s%s\n", STARS, STARS);
	while ((status = scanf("%d",&code)) != 1 || (code < 1 || code>5))
	{
		if (status != 1)
			scanf("%*s");  //这里的scanf是丢弃掉上次输入的字符，如果上次输入的是字符，这里就会陷入循环  %s读入一个字符串 以空格结束//星号*的作用就是表示读入字符串的宽
		printf("Enter an integer from 1 to 5, please.\n");
	}
	return code;
}

int getnights(void)
{
	int nights;
	printf("How many nights are needed? ");
	while (scanf("%d", &nights) != 1)
	{
		scanf("%*s");
		printf("Please enter an integer, such as 2.\n");
	}
	return nights;
}

void showprice(double rate, int nights)
{
	int n;
	double total = 0.0;
	double factor = 1.0;
	for (n = 1; n <= nights; n++, factor *= DISCOUNT)
		total += rate * factor;
	printf("The total cost will be $%0.2f.\n", total);
}
