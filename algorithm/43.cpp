#include<stdio.h>
#include<vector>
using namespace std;
int main() {
	int song_num, dvd_num, i, mid, high, low, sum=0;
	scanf("%d %d", &song_num, &dvd_num);

	vector<int> songs(song_num);

	for (i = 0; i < song_num; i++)
		scanf("%d", &songs[i]);

	
	//�̺а˻� �̿��ؼ� �� ó���� (1,2,3,4,5,6,7)(8)(9)�� �ߴٰ� ���� ���� �ø���

	int start=0, middle=song_num-7, end=song_num;

	for (start = 0; start < middle; start++) {
		sum = sum + songs[start];
	}
	int tmp = sum;
	sum = 0;
	for (; middle < end; middle++) {
		sum = sum + songs[middle];
	}

		//ũ�⸦ �ּ�ȭ�ؾ���.
	printf("%d", sum);

	return 0;
}