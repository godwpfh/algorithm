#include<stdio.h>
int main() {

	int num, i, j, sum = 0, final_sum = 0, count = 0; //�� ���� �ִ� �� ���߿� ���� ���ؼ� 
	scanf("%d", &num);

	//printf("%d",num/2);
	int now = 0, past = 0; bool check = true; //false�� �Ǹ� �ٷ� ���� ������� �Ѿ�� 

	for (i = num / 2 + 1; i > 0; i--) {
		if (past == 0) //ó�� ���� ��� 
		{
			past = i;
			sum = sum + past;
			printf("ó�� ���� ���� %d�Դϴ�. \n", i);
		}
		else { //ó������ �� �ƴ� ��� 
			if (!(sum >= num) && i - past == 1 && check == true) //�ϳ��� ���̰� ���� ��� 
			{
				past = i;
				sum = sum + past;
				printf("�������� ���� ���� %d�Դϴ�. \n", i);
			}
			else {
				check = false;
			}

		}
		if (check == true && sum == num)
		{
			count++;
			printf("�ϳ��� %d�� ����������ϴ�. \n", sum);
			sum = 0;
		}
	}

	printf("\n %d", count);

	return 0;
}