//��׺Ϊcpp��vs2017��C99��֧�ֲ����룬��Ϊ.c
#include<stdio.h>
#define MONTHS 12

int main(void)
{
	int days[MONTHS] = { 31,28,[4]=31,31,30,[1]=29 };
	int index;
	for (index = 0; index < MONTHS; index++)
		printf("Month %d has %2d days.\n", index + 1, days[index]);
	return 0;
}