//��ϰ��𰸿ɲο��ٶ��Ŀ⣬���ӣ�https://wenku.baidu.com/view/a1b1768f524de518964b7ddd.html


#include<stdio.h>
int sum(void);			//������
double sum1(void);		//������
void alter(int * px, int * py);//������
int maximum(int * po, int * pp, int * pq); //�ڰ���
void _print(void);		//�ھ���
int _choose(int c, int d);


int main()
{
				//������
	/*
	int sum_num;
	sum_num = sum();			
								//���ﺯ�����ͱ���������һ�������������������£�
								//1������ͬ��һ���������У�ֻ����һ��Ψһ������		
								//2��ͬ������������Ͽɾֲ����������Ͽ�ȫ�ֱ���		
								//3.����ȡ��������������ò�Ҫ������
	printf("Sum is %d\n", sum_num);
	*/

				//������
	/*
	double sum_num1;
	sum_num1 = sum1();			
	printf("Sum1 is %.2f\n", sum_num1);
	*/

				//������
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

				//�ڰ���
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

				//�ھ���
	_print();
	_choose(0,5);


	return 0;
}

/*
int sum(void)
{
	int a, b, sum;
	printf("4) Enter two numbers:");
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
		return sum;    //����Ҳ����ʹ��return a+b; �����㣡
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
	return max; //����Ҳ�бȽϼ��ķ����������
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