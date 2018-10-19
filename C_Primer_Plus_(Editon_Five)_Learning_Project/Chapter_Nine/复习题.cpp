//复习题答案可参考百度文库，链接：https://wenku.baidu.com/view/a1b1768f524de518964b7ddd.html


#include<stdio.h>
int sum(void);			//第四题
double sum1(void);		//第五题
void alter(int * px, int * py);//第六题
int maximum(int * po, int * pp, int * pq); //第八题
void _print(void);		//第九题
int _choose(int c, int d);


int main()
{
				//第四题
	/*
	int sum_num;
	sum_num = sum();			
								//这里函数名和变量名不可一样，网上找了资料如下：
								//1，在相同的一个作用域中，只能有一个唯一的名称		
								//2，同名情况下优先认可局部变量而不认可全局变量		
								//3.还会取决编译器，但最好不要这样干
	printf("Sum is %d\n", sum_num);
	*/

				//第五题
	/*
	double sum_num1;
	sum_num1 = sum1();			
	printf("Sum1 is %.2f\n", sum_num1);
	*/

				//第六题
	/*
	int x, y;
	printf("6) Enter two number to calculate sum and difference:");
	while (scanf("%d %d", &x, &y) != 2)
	{
		printf("Error number, try again!");
		while (getchar() != '\n');
	}
	alter(&x, &y);
	printf("6) Two number sum and difference: %d and %d.\n", x, y);
	*/

				//第八题
	/*
	int o, p, q, max;
	printf("8) Enter three number to return the maximum:");
	while (scanf("%d %d %d", &o, &p, &q) != 3)
	{
		printf("Error number, try again:");
		while (getchar() != '\n');
	}
	max = maximum(&o, &p, &q);
	printf("8) Maximum number:%d\n", max);
	*/

				//第九题
	_print();
	_choose(0,5);


	return 0;
}

/*
int sum(void)
{
	int a, b, sum;
	printf("4) Enter two numbers:");
	while(scanf("%d %d", &a, &b) != 2)		//不考虑非整数的情况，如需要进行筛选可用？？？
	{
		printf("Error number, try again!");
		//scanf("%d %d", &a, &b);
		//fflush(stdin);
		while (getchar() != '\n');			//这里我弄了一上午，也问某群里如何实现，自己也试了许多次，未果。这是群里大佬给出的，需要多注意scanf函数的运行原理，
		//getchar();
		//getchar(b);
	}
	sum = a + b;
	

		//else printf("Error number, try again!");
		return sum;    //这里也可以使用return a+b; 更方便！
}
*/

/*
double sum1()
{
	double a, b, sum;
	printf("5) Enter two numbers with decimals:");
	scanf("%lf %lf", &a, &b);
	sum = a + b;
	return sum;
}
*/

/*
void alter(int * px, int * py)
{
	int temp;
	temp = *px;
	*px = *x + *py;
	*py = temp - *py;
}
*/

/*
int maximum(int * po, int * pp, int *pq)
{
	int max;
	if (*po < *pp)
		max = *pp;
	else max = *po;
	if (max < *pq)
		max = *pq;
	return max; //网上也有比较简便的方法，都差不多
}
*/

void _print()
{
	printf("9) Please choose one of the following:\n");
	printf("	1) copy files	2) mve files\n");
	printf("	3) remove files 4) quit\n");
	printf("Enter the number of your choice:");
}
int _choose(int c, int d)
{
	int number;
	while ((scanf("%d", &number)!=1) || number<=c || number>=d)
	{
		_print();
		while (getchar() != '\n');
	}
	printf("Good job!\n");
	return number;

}