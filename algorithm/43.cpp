#include<stdio.h>
#include<vector>
#include<string.h>
using namespace std;
int songs_sum(1000);
int main() {
	int song_num, dvd_num, i,  sum=0;
	int min_sum = 1000;
	scanf("%d %d", &song_num, &dvd_num);

	vector<int> songs(song_num);

	for (i = 0; i < song_num; i++)
		scanf("%d", &songs[i]);

	
	//�̺а˻� �̿��ؼ� �� ó���� (1,2,3,4,5,6,7)(8)(9)�� �ߴٰ� ���� ���� �ø���

	int start=0, middle=song_num-2, end=song_num-1; //index������ 0�����̴ϱ� 

	for (start = 0; start < middle; start++) { //index0���� index6����
		sum = sum + songs[start];
	}
	int tmp = sum;
	sum = 0;
	for (; middle < end; middle++) {
		sum = sum + songs[middle];
	}

	//for (i = 0; i < strlen(songs_sum); i++) {
	//	if (min_sum > songs_sum[i])
	//		min_sum = songs_sum[i];
	//}
	printf("%d", min_sum);

	return 0;
}