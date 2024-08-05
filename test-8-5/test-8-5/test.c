#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int Max(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}
#define MAX(z,m)(z>m?z:m)// define 定义宏-带参数
int main()
{
	int a = 1000;
	int b = 200;
	//函数的方式
	int max = Max(a, b);
	printf("%d\n", max);
	//宏的方式
	max = MAX(a, b);
	printf("%d\n", max);
	return 0;
}
//#define Max 100// define 定义标识符常量
//int main()
//{
//	int a = Max;
//	printf("%d\n", Max);
//	printf("%d\n", a);
//	return 0;
//}
//extern int Add(int, int);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum=%d\n", sum);
//	return 0;
//}
//	
//int main()
//{
//	extern int g_val;
//	printf("g_val=%d\n", g_val);
//	return 0;
//}
//void test()
//{
//	static int b = 1;
//	//int b = 1;//b是一个静态的局部变量
//	b++;
//	printf("%d\n", b);
//}
//int main()
//{
//	int a = 0;
//	while (a < 5)
//	{
//		test();
//		a++;
//	}
//	return 0;
//}
//int Add(int x, int y)
//{
//	int z = 0;
//		z= x + y;
//	return z;
//}
//int main()
//{
//	int a = 1;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}
//int main()
//{
//	int a = 1000;
//	int b = 200;
//	int max = 0;
//	max = (a > b ? a : b);
//	{
//	if (a > b)
//
//		printf("%d\n", a);
//	else
//		printf("%d\n", b);
//	}
//	printf("%d\n", max);
//	return 0;
//}
//int main()
//{
//	int a = 5;
//	int b = 3;
//	int c = a && b;//&&-逻辑与
//	int d = a || b;//||-逻辑或
//	printf("%d\n", d);
//	return 0;
//}