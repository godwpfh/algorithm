#include<stdio.h>
#include<algorithm>
#include<vector>
using namespace std;
int main42_() {

	int num, key, i, count = 0;
	int low, high, mid = 0;
	scanf("%d %d", &num, &key);

	vector <int> arr(num);

	for (i = 0; i < num; i++)
		scanf("%d", &arr[i]);
		//scanf("%d", &tmp);
		//a.push_back(tmp); �̷��Ե� ǥ�� ����

	sort(arr.begin(), arr.end()); //������������ ���� 



	low = 0;
	high = num - 1;
	while (mid != key && !(low > high)) {
		mid = (low + high) / 2;
		if (mid > key) {
			low = mid + 1;
		}
		else {
			high = mid - 1;
		}
		count++;
	}

	printf("%d", count);

	return 0;
}