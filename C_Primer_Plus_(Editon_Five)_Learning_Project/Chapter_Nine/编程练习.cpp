#include<stdio.h>

double min(double x, double y);				//��һ��
void chline(char ch, int i, int j);			//�ڶ���
void chrow(char ch3, int i3, int j3);		//������
double XieJunZhi(double i4, double j4);		//������
void larger_of(double * pi5 , double * pj5);//������


int main()
{
		//��һ��
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

		//�ڶ���
	/*		//�����ص���ָ���ַ������ַ������Ҹտ�ʼ�����  
	char strings;  //���ﶨ����һ�����壬�������ϣ�����Ҳ��
	int i, j;
	printf("Enter a string of characters:\n");
	scanf("%c", &strings);
	while (getchar() != '\n');		//�����ų��˷�����һ���ַ��Ľ�������������Ȼ���Ҳ����ȷ
	printf("Please two number to show the strings:");
	while (scanf("%d %d", &i, &j) != 2)
	{
		printf("Error number, try again:");
		while (getchar() != '\n');
	}
	chline(strings, i, j);
	*/

		//������
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

		//������
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

		//������
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


	return 0;
}

/*
double min(double x, double y)
{
	return (x < y) ? x : y;					//��ϰһ�£�X�Ƿ�С��Y��  ����x<y����  ����ǣ��ͷ���X���񷵻�Y x:y
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