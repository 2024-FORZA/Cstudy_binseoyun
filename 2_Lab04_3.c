#include<stdio.h>
//17608번
int main() {
	int N; //막대기의 개수
	scanf("%d", &N);
	int hi[100000]; //막대기의 높이
	int h;
	for (int i = 0; i < N; i++) {
		scanf("%d", &h);
		hi[i] = h;

	}
	
	int max = hi[N-1];
	int count = 1;
	for (int j = N - 2; j >= 0; j--) {
		if (hi[j] > max) { //마지막 보다 더 큰 막대기만 취급
			max = hi[j];
			count += 1;
		}
	}
	printf("%d", count);
	return 0;
}