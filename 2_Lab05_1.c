/*/2798번 블랙잭 문제
#include<stdio.h>
int main() {
	int N, M; //N장 M을 넘지 않는 수의 합 만들기
	scanf("%d %d", &N, &M);
	int card[100];
	for (int i = 0; i < N; i++) {
		scanf("%d", &card[i]);

	}

	int sum[30000000]; //합을 계산해서 더한 후 M을 넘지 않고 비슷한 수 찾기
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
		if (sum[i] > M) { //M 보다 크면 0으로 초기화
			sum[i] = 0;
		}
	
	}

	int max = sum[0];
	for (int i = 1; i < N*M; i++) { //M보다 작거나 같은 수 중 큰 값
		if (sum[i] > max) {
			max = sum[i];
		}
	}

	printf("%d", max);
}*/