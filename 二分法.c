#include<stdio.h>
int main()
{
	//��ʼ��
	int i = 0;
	int a[] = { 1,2,3,4,5,6,7,8,9,10 };
	//��ȡ����
	scanf("%d", &i);
	//���������С
	int size = sizeof(a) / sizeof(a[0]);
	//������ֵ ��ֵ ��ֵ
	int left = 0;
	int right = size - 1;
	//���ַ�
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
	//û�ҵ�ֵ�����
	if (left > right) {
		printf("Not Found");
	}
	return 0;
}