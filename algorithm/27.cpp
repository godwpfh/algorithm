#include<stdio.h>
#include<vector>
int main27() {

	int num;
	int i, j, tmp;
	scanf("%d", &num);
	std::vector<int> check(num + 1);
	for (i = 2; i <= num; i++) {
		tmp = i;
		j = 2;

		while (1) {
			if (tmp % j == 0)
			{
				tmp = tmp / j; //������ �ٲ�� �ؼ�
				check[j]++;
			}
			else {
				j++; //������������ ������ j�� �Ҽ���θ� �����ϰ� �ȴ�. 
			}
			if (tmp == 1) {
				break;
			}
		}
	}

	printf("%d! = ", num);

	for (i = 2; i <= num; i++) {
		if (check[i] != 0)
			printf("%d ", check[i]);
	}

	return 0;
}