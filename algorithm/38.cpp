#include<stdio.h>
#include<vector>
using namespace std;
int main() {

	int i, j, tmp, num, count = 0;
	scanf("%d", &num);

	vector <int> arr(num + 1);
	vector <int> sorted(num + 1);
	for (i = 1; i <= num; i++) {
		scanf("%d", &arr[i]);
	}  
	//������ ������ �� ū�� Ȯ���ϱ�
	for (i = 1; i <= num; i++) {
		tmp = arr[i];



		for (j = 1; j <= i; j++) {
			if (tmp < sorted[j]) {
				count++; //������ �� ū ���� �󸶳� �ִ��� 
			}
		}

		for (j = tmp + 1; j <= num; j++) {
			if (sorted[j] != 0) { //�̹� ���մ� ��� 
				;
			}
			else { //����ִ� ��� 
				sorted[j] = i;
			}
		}
		count++;
	}

	for (i = 1; i <= num; i++) {
		printf("%d ", sorted[i]);
	}

	return 0;
}