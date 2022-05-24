 #define _CRT_SECURE_NO_WARNINGS  1
#include<stdio.h>
#include<float.h>
#include<math.h>
//#define EPSILON 0.0000000001
//int main()
//{
//	double x = 1;
//	double y = 0.1;
//	printf("%.50f\n", x);
//	printf("%.50f\n", y);
//
//	printf("%.50f\n", x - 0.9);
//	printf("%.50f\n", y);
//
//	if (fabs((x - 0.9) - y) < DBL_EPSILON)
//	{
//		printf("you can see me!\n");
//
//	}
//	else
//	{
//		printf("oops!\n");
//	}
//	//if (((x-0.9)-y)>-EPSILON && ((x-0.9)-y)<EPSILON)
//	//{
//	//	printf("you can see me!\n");
//
//	//}
//	//else
//	//{
//	//	printf("oops!");
//	//}
//
//	return 0;
//}

//int main()
//{
//	double x = 0.0000000000000000000000000001;
//	if (fabs(x) < DBL_EPSILON)
//	{
//		printf("you can see me\n");
//
//	}
//	else
//	{
//		printf("oops\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	类型不同
//	printf("%d\n", 0);
//	printf("%d\n", '0');
//	
//	
//	int a = 0;
//	char* p = NULL;																								
//}

//真实的转化：改变内存中的数据
//强制类型转化：不改变内存中数组，只改变相应的类型

//推荐写法：if(NULL == P)

//int main()
//{
//	int x = 0;
//	int y = 1;
//	if (10 == x)
//		if (11 == y)
//			printf("hello anduin\n");
//	else
//			printf("hello world\n");
//	//else 就近原则，和第二个if匹配
//	return 0;
//}

//int main()
//{
//	int flag = 1;
//	if (flag)
//		;
//	{
//		printf("hello world");
//	}
//}

int main()
{
	int day = 0;
	scanf("%d", &day);
	switch (day)
	{
	case1:
		printf("星期2\n");
		break;
	case2:
		printf("星期2\n");
		break; 
	case3:
		printf("星期3\n");
		break;
	case4:
		printf("星期4\n");
		break;
	case5:
		printf("星期6\n");
		break;
	case7:
		printf("星期7\n");
		break;
	case1:
		printf("星期一\n");
		break;

	}

	return 0;
}