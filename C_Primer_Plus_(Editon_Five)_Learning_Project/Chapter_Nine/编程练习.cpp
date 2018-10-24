#include<stdio.h>

double min(double x, double y);				//第一题
void chline(char ch, int i, int j);			//第二题
void chrow(char ch3, int i3, int j3);		//第三题
double XieJunZhi(double i4, double j4);		//第四题
void larger_of(double * pi5 , double * pj5);//第五题
void returnch(char ch6);					//第六题
double power(double n7, int p7);			//第七题&&第八题
void to_binary(unsigned long n9, int power91);			//第九题
long Fibonacci(int num10);					//第十题



int main()
{
		//第一题
	/*
	double num1, num2;
	printf("Please enter two number:");
	while (scanf("%lf %lf", &num1, &num2) != 2)
	{
		printf("Error number, try again!");
		while (getchar() != '\n');
	}
	printf("The minimum number is %.4f.\n", min(num1, num2));
	*/

		//第二题
	/*		//这里重点是指定字符，非字符串。我刚开始搞错了  
	char strings;  //这里定义有一点歧义，理由如上，以下也是
	int i, j;
	printf("Enter a string of characters:\n");
	scanf("%c", &strings);
	while (getchar() != '\n');		//这里排除了非输入一个字符的结果，会溢出，虽然结果也是正确
	printf("Please two number to show the strings:");
	while (scanf("%d %d", &i, &j) != 2)
	{
		printf("Error number, try again:");
		while (getchar() != '\n');
	}
	chline(strings, i, j);
	*/

		//第三题
	/*
	char ch3;
	int i3, j3;
	printf("Please enter a character:");
	scanf("%c", &ch3);
	while (getchar() != '\n');
	printf("Enter two number of colum and row:");
	while (scanf("%d %d", &i3, &j3) != 2)
	{
		printf("Error number, try again:");
		while (getchar() != '\n');
	}
	chrow(ch3, i3, j3);
	*/

		//第四题
	/*
	double i4, j4;
	printf("Enter two numbers:");
	while (scanf("%lf %lf", &i4, &j4) != 2)
	{
		printf("Error number, try again:");
		while (getchar() != '\n');
	}
	printf("The calculate number is: %.4lf", XieJunZhi(i4,j4));
	*/

		//第五题
	/*
	double  i5,  j5;
	printf("Enter two number:");
	while (scanf("%lf %lf", &i5, &j5) != 2)
	{
		printf("Error number, try again:");
		while (getchar() != '\n');
	}
	larger_of(&i5, &j5);
	printf("Two number is %.2lf and %.2lf.\n", i5, j5);
	*/

		//第六题
	/*
	char ch6;
	printf("Please enter characters:(Ctrl+z to quit)");
	while ((ch6=getchar())!=EOF)		//跳出循环只能在回车后按入Ctrl+z
	{
		returnch(ch6);
	}
	printf("Done");
	*/

		//第七题&&第八题
	/*
	double x, xpow;
	int exp;
	printf("Enter a number and the integer power(q to quit):");
	while (scanf("%lf %d", &x, &exp) == 2)
	{
		xpow = power(x, exp);
		printf("%.3g to the power %d is %.5g\n", x, exp, xpow);  //%g用来输出实数，输出格式为f格式或e格式，
																 //系统根据数据占宽度m大小，自动选择占宽度较小的某种格式输出，g格式符不输出小数点后无意义的零。
		printf("Enter next pair of number or q to quit.\n");
	}
	printf("Hope you enjoyed this power trip --bye!\n");
	*/

		//第九题
	/*
	unsigned long number9;
	int power9;
	printf("Enter an integer and power(2-10):(q to quit)");
	while ((scanf("%lu %d",&number9,&power9)==2)&&power9>1&&power9<11)					//这里书上 %ul 是错的，害我排除了那么久，网上一查，果然
	{
		printf("Binary equivalent:");
		to_binary(number9,power9);
		putchar('\n');
		printf("Enter an integer(q to quit):\n");
	}
	printf("Done.\n");
	*/
		//第十题
	int n10;
	printf("Enter a number:");
	scanf("%d", &n10);
	printf("The sum is %ld.\n", Fibonacci(n10));

	return 0;
}


/*
double min(double x, double y)
{
	return (x < y) ? x : y;					//复习一下，X是否小于Y？  即（x<y）？  如果是，就返回X，否返回Y x:y
}
*/

/*
void chline(char ch, int i, int j)
{
	int n;
	for (n = 0; n<i; n++)
		printf(" ");
	for (; n < j; n++)
		printf("%c", ch);
	printf("\n");
}
*/

/*
void chrow(char ch3, int i3, int j3)
{
	int n,m;
	for (n = 0; n < j3; n++)
	{
		for (m = 0; m < i3; m++)
			printf("%c", ch3);
		printf("\n");
	}	
}
*/

/*
double XieJunZhi(double i4, double j4)
{
	return 1 / ((1 / i4 + 1 / j4) / 2);
}
*/

/*
void larger_of(double * pi5, double * pj5)
{
	if (*pi5 < *pj5)
		*pi5 = *pj5;
	else *pj5 = *pi5;
}
*/

/*
void returnch(char ch6)
{
	if (ch6 >= 65 && ch6 <= 90)  //也可以参考头文件为<ctype.h>,isalpha()以及tolower()这两个函数，一个判断是否为字母，一个把字母改为小写
		printf("Y%d ", ch6 - 64);
	else if (ch6 >= 97 && ch6 <= 122)
		printf("Y%d ", ch6 - 96);
	else  printf("N-1 "); 
}
*/

/*
double power(double n, int p)
{
	double pow = 1;
	int i;
	if (p > 0)
	{
		for (i = 1; i <= p; i++)
			pow *= n;
	}
	else if(p < 0)
	{
		p = -p;						// 第八题即把这里的所有内容替换成pow=1/power(n,-p);
		for (i = 1; i <= p; i++)
			pow *= n;
		pow = 1 / pow;
	}
	else;
	return pow;
}
*/

/*
void to_binary(unsigned long n, int power91)
{
	int r;
	r = n % power91;
	if (n >= power91)
		to_binary(n / power91, power91);
	putchar('0' + r);
}*/

long Fibonacci(int num10)
{
	int i,sum1=1,sum2=1,tem;
	if (num10 > 2)
	{
		for (i = 2; i < num10; i++)
		{
			tem = sum1 + sum2;
			sum1 = sum2;
			sum2 = tem;
		}
	}
	else sum2 = 1;
	return sum2;
}
