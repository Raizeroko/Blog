#define _CRT_SECURE_NO_WARNINGS 1

//一、容易忽略的运算符优先问题
//
//#include<stdio.h>
//
//int main()
//{
//	int c;
//	while (c = getchar() != EOF)
//	{
//		putchar(c);
//	}
//	return 0;
//}



//二、数组与指针
//
//#include<stdio.h>
//
//int main()
//{
//	int arr[] = { 0,1,2,3 };
//	for (int i = 0; i < 4; i++)
//	{
//		printf("%d ", i[arr]);
//
//	}
//	return 0;
//}


//三、#define与typedef
//
//#define type1 int*
//typedef int* type2;
//
//int main()
//{
//	type1 a, b;
//	type2 c, d;
//	int* e, f;
//	return 0;
//}

//四、main函数返回类型
//char main()
//{
//	char a = 'a';
//	printf("Hello World");
//	return a;
//}



//结构体与函数返回类型
//#include<stdio.h>
//
//struct logrec {
//	int data;
//	int time;
//	int code;
//}
//fun(int x)
//{
//	struct logrec a = {0};
//	printf("测试\n");
//	return a;
//}
//int main()
//{
//	printf("测试\n");
//	struct logrec c = { 0 };
//	fun(1);
//	return 0;
//}
//
//
//#include<stdio.h>
//
//struct logrec {
//	int data;
//	int time;
//	int code;
//};
//struct logrec fun(int x)
//{
//	struct logrec a = { 0 };
//	printf("测试\n");
//	return a;
//}
//int main()
//{
//	printf("测试\n");
//	struct logrec c = { 0 };
//	fun(1);
//	return 0;
//}


//struct logrec{ ... };
//
//struct logrec fun(){ };
//
//
//struct logrec { ... } fun() { };



//四.补充
//
#include<stdio.h>
struct test {
	float a;
	char b;
	int c;
};
struct test main()
{
	struct test a = {0};
	printf("测试");
	return a;
}

//#include<stdio.h>
//float main()
//{
//	float a;
//	double b;
//	a = 3.14;
//	b = 5.15;
//	printf("测试\n");
//	printf("测试\n");
//	printf("测试\n");
//
//
//	return b;
//}