#include<stdio.h>
//17608��
int main() {
	int N; //������� ����
	scanf("%d", &N);
	int hi[100000]; //������� ����
	int h;
	for (int i = 0; i < N; i++) {
		scanf("%d", &h);
		hi[i] = h;

	}
	
	int max = hi[N-1];
	int count = 1;
	for (int j = N - 2; j >= 0; j--) {
		if (hi[j] > max) { //������ ���� �� ū ����⸸ ���
			max = hi[j];
			count += 1;
		}
	}
	printf("%d", count);
	return 0;
}