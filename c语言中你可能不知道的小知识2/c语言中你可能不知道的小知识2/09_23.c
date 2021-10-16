#define _CRT_SECURE_NO_WARNINGS 1


//#前导符号
//
//#include<stdio.h>
//
//int main()
//{
//	int a = 12;                 
//	float b = 3.14;
//	printf("*%d*\n", a);        //用两个'*'知识为了方便给
//	printf("*% d*\n", a);       //大家呈现具体结果,只用回答
//	printf("*% d*\n", -a);      //*里的内容就行
//
//	printf("*%5d*\n", a);
//	printf("*%-5d*\n", a);
//	printf("*%05d*\n", a);
//
//	printf("*%+d*\n", a);
//	printf("*%+d*\n", -a);
//
//	printf("*%x*\n", a);
//	printf("*%#x*\n", a);
//	return 0;
//}



//'-=' 与 '=-'
//
//#include<stdio.h>
//
//int main()
//{
//	int a = 0;
//	a=-1;
//	printf("%d", a);
//	return 0;
//}



//函数原型与函数前置声明
//
//#include<stdio.h>
//
//int sum();
//
//int main()
//{
//	int x = 1;
//	int y = 2;
//	int z = 0;
//	z = sum(x, y);
//	printf("%d", z);
//	return 0;
//}
//
//
//int sum(int x, int y)
//{
//	return x + y;
//}



//结构体位段
//
//#include<stdio.h>
//
//struct A
//{
//    int a : 2;
//    int b : 5;//1
//    int c : 10;//2
//     d : 30;//4
//};
//
//int main()
//{
//    printf("%d", sizeof(struct A));
//    return 0;
//}



//函数传递
//
//#include<stdio.h>
//#include<string.h>
//
//void GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//}
//int main()
//{
//	char* str = NULL;
//	GetMemory(str);
//	strcpy(str, "hello world");
//	printf("%s", str);
//	return 0;
//}



//复习题
//
#include<stdio.h>
#include<string.h>

 struct A
{
    char a : 3;
    char b : 4;//1
    char c : 5;//2
    char d : 4;//4
};

int sum();

int main()
{
	int x = 3, y = 5, z = 0;
	z = sum(x, y);
	printf("*%+03d*\n",z);
	printf("*%- 5d*\n",  z);
	printf("%d", sizeof(struct A));
	return 0;
}

int sum(int x, int y)
{
	return x + y;
}

