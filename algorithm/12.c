#include<stdio.h>
int main12() {
	int n, sum = 0, c = 1, d = 9, res = 0;
	scanf("%d", &n);

	while (sum + d < n) {
		res = res + (c * d);
		sum = sum + d;
		c++;
		d = d * 10; //�� �ڸ����� ������ ���� 
	}
	res = res + (n - sum) * c;
	printf("%d \n", res);
	return 0;
}