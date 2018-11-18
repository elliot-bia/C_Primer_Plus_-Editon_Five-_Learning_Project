//新增了++*p4，从右到左进行，等效于(*p3)++
#include<stdio.h>
int date[2] = { 100,200 };
int moredate[2] = { 300,400 };
int main(void)
{
	int * p1, *p2, *p3, *p4;
	p1 = p2 = date;
	p3=p4 = moredate;
	printf(" *p1 = %d, *p2 = %d, *p3=%d *p4=%d\n", *p1, *p2, *p3, *p4);
	printf(" *p1++ = %d, *++p2 = %d, (*p3)++=%d, ++*p4\n", *p1++, *++p2, (*p3)++, ++*p4);
	printf(" *p1 = %d, *p2 = %d, *p3=%d, *p4=%d\n", *p1, *p2, *p3, *p4);

	return 0;
}
