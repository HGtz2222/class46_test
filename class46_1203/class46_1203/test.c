#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

// 1. 打断点
// 2. F5

void Add4() {

}

int Add3(int x, int y) {
	return x + y;
}

int Add2(int x, int y) {
	return Add3(x, y);
}

int Add(int x, int y) {
	return Add2(x, y);
}

int main() {
	int sum = 0;
	sum = Add(10, 20);
	printf("%d\n", sum);




	//int i = 0;
	//int arr[10] = { 0 };
	//for (i = 0; i <= 12; i++)
	//{
	//	arr[i] = 0;
	//	printf("hehe %p %p\n", &arr[i], &i);
	//}



	//int i = 0;
	//int sum = 0;//保存最终结果
	//int n = 0;
	//int ret = 1;//保存n的阶乘

	//scanf("%d", &n);
	//// 求阶乘的和
	//for (i = 1; i <= n; i++)
	//{
	//	int j = 0;
	//	// 这个循环, 求 i 的阶乘
	//	for (j = 1; j <= i; j++)
	//	{
	//		ret *= j;
	//	}
	//	sum += ret;
	//}
	//printf("%d\n", sum);


	system("pause");
	return 0;
}