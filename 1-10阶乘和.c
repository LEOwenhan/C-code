#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int step(int n)
//{
//	int ret = 1;
//	for (int i = 1; i <= n; i++) {
//		ret = ret * i;
//	}
//	return ret;
//}
int main()
{
	int j = 0;
	int sum = 0;
	for (j = 1; j <= 10; j++) {
		//sum += step(j);
		int ret = 1;
		for (int i = 1; i <= j; i++) {
			ret *= i;
		}
		sum += ret;
	}
	printf("1!+2!+3!+~+10!=%d", sum);
	return 0;
}