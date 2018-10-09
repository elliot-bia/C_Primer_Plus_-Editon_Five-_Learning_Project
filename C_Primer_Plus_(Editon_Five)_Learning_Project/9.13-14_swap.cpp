#include<stdio.h>
void interchange(int u, int v);
int interchange_plus(int u, int v);
int main(void)
{
	int x = 5, y = 10;
	printf("Originallly x = %d and y = %d.\n", x, y);
	interchange(x, y);
	printf("Now data of x and y in main function after interchange: x = %d and y =%d.\n", x, y);

	//*****************Second program****************//
	interchange_plus(x, y);

	//*****************Third program****************//
	x = interchange_plus(x, y);
	printf("\nNow Third interchange data of x and y in assignment action: x = %d and y =%d.\n", x, y);//Assignment n.¸³Öµ
	return 0;		
}
void interchange(int u, int v)
{
	int temp;
	temp = u;
	u = v;
	v = temp;
}

int interchange_plus(int u, int v)
{
	int temp;
	printf("\n*****************The second program in swap date duiring coding.*****************\n");
	printf("Originallly data in second  u = %d and v = %d.\n", u, v);
	temp = u;
	u = v;
	v = temp;
	printf("Now data of u and v in interchange_plus function after interchange: u = %d and v =%d.\n", u, v);

	return u;
}