//��ϰ��𰸿ɲο��ٶ��Ŀ⣬���ӣ�https://wenku.baidu.com/view/a1b1768f524de518964b7ddd.html


#include<stdio.h>
int sum(void);			//������
double sum1(void);		//������
int main()
{
	int sum_num;
	double sum_num1;
	sum_num = sum();			//���ﺯ�����ͱ���������һ�������������������£�
								//1������ͬ��һ���������У�ֻ����һ��Ψһ������		
								//2��ͬ������������Ͽɾֲ����������Ͽ�ȫ�ֱ���		
								//3.����ȡ��������������ò�Ҫ������
	printf("Sum is %d\n", sum_num);

	sum_num1 = sum1();
	printf("Sum1 is %.2f\n", sum_num1);
	return 0;
}
int sum(void)
{
	int a, b, sum;
	printf("Enter two numbers:");
	while(scanf("%d %d", &a, &b) != 2)		//�����Ƿ����������������Ҫ����ɸѡ���ã�����
	{
		printf("Error number, try again!");
		//scanf("%d %d", &a, &b);
		//fflush(stdin);
		while (getchar() != '\n');			//������Ū��һ���磬Ҳ��ĳȺ�����ʵ�֣��Լ�Ҳ�������Σ�δ��������Ⱥ����и����ģ���Ҫ��ע��scanf����������ԭ��
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
