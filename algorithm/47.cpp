#include<stdio.h>
#include<vector>
using namespace std;
int main() {
	int n, i, j;
	int count = 0;
	int horizontal, verical;
	scanf("%d", &n);
	vector<vector<int> > arr(n + 2, vector<int>(n + 2));


	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++) {
			scanf("%d", &arr[i][j]);
		}
	}




	//���η� ū �� �߿� ���ο����� ū �� Ȯ���ϱ� 
	for (i = 1; i <= n; i++) {
		j = 1;
		if (arr[i - 1][j]<arr[i][j] && arr[i][j]>arr[i][j + 1])
		{
			for (j = 1; j < n; j++) {
				if (arr[i][j - 1]< arr[i][j] && arr[i][j]>arr[i][j + 1]) {
					count++;
					printf("(%d %d)�� �ִ� %d�� ���츮�� \n", i, j, arr[i][j]);
				}
			}
		}
	}

	printf("%d", count);

	return 0;
}