#define _CRT_SECURE_NO_WARNINGS 1



//swith与case问题
//
//#include<stdio.h>
//
//int main()
//{
//	int n = 1;
//	switch (n)
//	{
//	case 1:
//		printf("%d ", 1);
//	case 2:
//		printf("%d ", 2);
//	case 3:
//		printf("%d ", 3);
//	}
//}

//switch与case解答
//
//#include<stdio.h>
//
//int main()
//{
//	int n = 1;
//	switch (n)
//	{
//	case 1:
//		printf("%d ", 1);
//		break;
//	case 2:
//		printf("%d ", 2);
//		break;
//	case 3:
//		printf("%d ", 3);
//		break;
//	}
//}



//switch与default问题
//
//#include<stdio.h>
//
//int main()
//{
//	int n = 1;
//	switch (n)
//	{
//	case 1:
//		printf("%d ", 1);
//	case 2:
//		printf("%d ", 2);
//	default:
//		printf("%d ", 3);
//	}
//}



//while与scanf
//
//int main()
//{
//	int input;
//	while (scanf("%d", &input) != EOF)
//	{
//		;
//	}
//}



//sizeof与strlen
//
//#include<stdio.h>
//
//int main()
//{
//	char arr[] = "abcde";
//	printf("%d ", strlen(arr));
//	printf("%d", sizeof(arr));
//
//	return 0;
//}



//arr与&arr
//
//#include<stdio.h>
//
//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//	int* ptr = (int*)(&a+1);
//	printf("%d ", *a);
//	printf("%d ", *(int*)(&a));
//	printf("%d ", *(a + 1));
//	printf("%d ", *(ptr));
//}

//*a与*&a
//
//#include<stdio.h>
//
//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//	printf("%p\n", a);// %p打印地址，就如同%d是打印整数一样的
//	printf("%p ", (int*)(&a));
//}

#include<stdio.h>
#include<string.h>
int main()
{
	int input = 1;
	char arr[] = "abcdefg";
	switch (input)
	{
	case 1:
		printf("%d ", sizeof(arr));
		printf("%d ", strlen(arr));
	case 2:
		printf("%c ", *(int*)&arr);
		printf("%c  ", *(int*)(&arr + 1));
		printf("%c ", *arr);
		printf("%c ", *(arr + 3));
		break;
	default:
		printf("%d ", 100);
	}
}