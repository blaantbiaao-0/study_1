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
	//int arr[5] = { 1,2,3,4,5 };						//�����ڴ���ʱȡ��ַ����Ȼ����Ԫ�ص�ַ����
	//printf("%d\n%d\n",&arr, &arr + 1);
	//shiyan_1(&arr);
	int a = 1;//
	int* p1 = &a;
	int * p2 = &a;
	printf("%d\n%d\n%d\n%d\n", p1,*p1,p2,*p2);				//����ָ�����ʱ*�����ţ�
	return 0;
}