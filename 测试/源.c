#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void shiyan_1(int* arr)
{
	printf("%d\n", arr);
	arr++;
	printf("%d", arr);
}
int main()
{
	//int a = 2 ;
	//printf("a:%d\n", a);
	//int* p = &a;
	//int* p_1 = a;
	//printf("p:%d\n", p);
	//printf("p_1: %d\n", p_1);
	//printf("*p:%d\n", *p);
	//int arr[5] = { 1,2,3,4,5 };						//数组在传参时取地址，依然是首元素地址？！
	//printf("%d\n%d\n",&arr, &arr + 1);
	//shiyan_1(&arr);
	int a = 1;//
	int* p1 = &a;
	int * p2 = &a;
	printf("%d\n%d\n%d\n%d\n", p1,*p1,p2,*p2);				//定义指针变量时*号随便放？
	return 0;
}