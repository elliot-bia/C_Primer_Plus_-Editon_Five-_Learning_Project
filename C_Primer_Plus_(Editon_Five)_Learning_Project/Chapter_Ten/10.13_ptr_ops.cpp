//强调一下，这个程序想表达的，是指针存储的地址，和指针所指向的地址，是两个不同的位置。
#include<stdio.h>
int main()
{
	int urn[5] = { 100,200,300,400,500 };
	int * ptr1, * ptr2, * ptr3;
	ptr1 = urn;
	ptr2 = &urn[2];
	printf("Pointer value, deregerenced pointer, pointer address:\n");
	printf("ptr1 = %p, *ptr1 = %d, &ptr1 = %p\n", ptr1, *ptr1, &ptr1);
	ptr3 = ptr1 + 4;
	printf("\n adding an int to a pointer:\n");
	printf("ptr1+4=%p, *(ptr4+3)=%d\n", ptr1 + 4, *(ptr1 + 3));
	ptr1++;
	printf("\n values after ptr1++\n");
	printf("ptr1=%p,*ptr1=%d,&ptr1=%p\n", ptr1, *ptr1, &ptr1);
	ptr2--;
	printf("\n values after --ptr2\n");
	printf("ptr2=%p,*ptr2=%d,&ptr2=%p\n", ptr2, *ptr2, &ptr2);
	--ptr1;
	++ptr2;
	printf("\n Pointers reset to original values:\n");
	printf("ptr1=%p, ptr2=%p\n", ptr1, ptr2);
	printf("\n subtracting one pointer from another:\n");
	printf("ptr2=%p, ptr1=%p, ptr2-ptr1=%d\n", ptr2, ptr1, ptr2 - ptr1);
	printf("\n subtracting an int from a pointer:\n");
	printf("ptr3=%p, ptr3-2=%p\n", ptr3, ptr3 - 2);

	return 0;

}