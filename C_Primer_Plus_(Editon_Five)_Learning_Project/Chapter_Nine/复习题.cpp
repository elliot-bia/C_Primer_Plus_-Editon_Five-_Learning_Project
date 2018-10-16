//复习题答案可参考百度文库，链接：https://wenku.baidu.com/view/a1b1768f524de518964b7ddd.html


#include<stdio.h>
int sum(void);			//第四题
double sum1(void);		//第五题
int main()
{
	int sum_num;
	double sum_num1;
	sum_num = sum();			//这里函数名和变量名不可一样，网上找了资料如下：
								//1，在相同的一个作用域中，只能有一个唯一的名称		
								//2，同名情况下优先认可局部变量而不认可全局变量		
								//3.还会取决编译器，但最好不要这样干
	printf("Sum is %d\n", sum_num);

	sum_num1 = sum1();
	printf("Sum1 is %.2f\n", sum_num1);
	return 0;
}
int sum(void)
{
	int a, b, sum;
	printf("Enter two numbers:");
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
		return sum;
}

double sum1()
{
	double a, b, sum;
	printf("Enter two numbers with decimals:");
	scanf("%lf %lf", &a, &b);
	sum = a + b;
	return sum;
}
