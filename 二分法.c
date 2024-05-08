#include<stdio.h>
int main()
{
	//初始化
	int i = 0;
	int a[] = { 1,2,3,4,5,6,7,8,9,10 };
	//读取变量
	scanf("%d", &i);
	//计算数组大小
	int size = sizeof(a) / sizeof(a[0]);
	//计算左值 右值 中值
	int left = 0;
	int right = size - 1;
	//二分法
	while (left <= right) {
		int mid = (left + right) / 2;
		if (a[mid] < i) {
			left = mid + 1;
		}
		else if (a[mid] > i) {
			right = mid - 1;
		}
		else {
			printf("a[%d]=%d", mid, i);
			break;
		}
	}
	//没找到值的情况
	if (left > right) {
		printf("Not Found");
	}
	return 0;
}