#include<stdio.h>
int main37() {
	int num, i, j, k, work, income;

	scanf("%d %d", &num, &work);
	int pos;
	//num�� �迭�� ũ��, work�� �۾��� ��  

	int arr[10] = { 0 }; //0���� �ʱ�ȭ 

	for (i = 0; i < work; i++) {
		scanf("%d", &income);

		pos = -1;

		for (j = 0; j < num; j++) {
			if (arr[j] == income) {
				pos = j; //hit�� ��� 
			}
		}

		if (pos == -1) //miss�� ���
		{
			for (j = num - 1; j >= 1; j--) //�� ������ �迭���� ���� 
			{
				arr[j] = arr[j - 1]; //�� ������ ���� �ڿ������� ��������. 
			}
		}
		else { //hit�� ��� 

			for (j = pos; j >= 1; j--) {
				arr[j] = arr[j - 1];
			}
		}
		arr[0] = income;
	}

	for (i = 0; i < num; i++)
		printf("%d ", arr[i]);
	return 0;
}