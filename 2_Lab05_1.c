/*/2798�� ���� ����
#include<stdio.h>
int main() {
	int N, M; //N�� M�� ���� �ʴ� ���� �� �����
	scanf("%d %d", &N, &M);
	int card[100];
	for (int i = 0; i < N; i++) {
		scanf("%d", &card[i]);

	}

	int sum[30000000]; //���� ����ؼ� ���� �� M�� ���� �ʰ� ����� �� ã��
	int a = 0;
	for (int i = 0; i < N; i++) {
		for (int j = i + 1; j < N; j++) {
			for (int k = j + 1; k < N; k++) {
				sum[a] = card[i] + card[j] + card[k];
				a++;
			}
		}
	}

	for (int i = 0; i < N*M; i++) {
		if (sum[i] > M) { //M ���� ũ�� 0���� �ʱ�ȭ
			sum[i] = 0;
		}
	
	}

	int max = sum[0];
	for (int i = 1; i < N*M; i++) { //M���� �۰ų� ���� �� �� ū ��
		if (sum[i] > max) {
			max = sum[i];
		}
	}

	printf("%d", max);
}*/