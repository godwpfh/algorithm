#include<stdio.h>
#include<vector> //���� �Ҵ��� ���ؼ� 
using namespace std;
int main22_() {
	int days, distance, i, j, sum = 0, max;
	scanf("%d %d", &days, &distance);

	vector<int>temp(days); //daysũ�⸸ŭ temp��� ���� �迭�� ���� �� 

	for (i = 0; i < days; i++) {
		scanf("%d", &temp[i]);
	} //�迭 �ʱ�ȭ 

	for (i = 0; i < distance; i++) {
		sum += temp[i]; //ó���� ���� ���ؼ� �ֱ� 
	}
	max = sum;

	for (i = distance; i < days; i++) {
		sum = sum + (temp[i] - temp[i - distance]);

		if (sum > max)
			max = sum;
	}


	printf("%d \n", max);

	return 0;
}