#include<stdio.h>
int main() {
	int N, M;
	scanf("%d %d", &N, &M);
	int ball[101] = { 0 };
	ball[0] = 0;
	for (int i = 1; i <= N; i++) { // N=5, 0,1,2,3,4,5 ball[N+1]이 만들어져아 함

		ball[i] = i; //배열의index와 바구니 번호의 번호를 맞춤
	}

	int temp;
	for (int k = 0; k < M; k++) { //M번 반복
		int i, j = 0;
		scanf("%d %d", &i, &j);
		
		temp = ball[i];
		ball[i] = ball[j];
		ball[j] = temp;
	}
	for (int i = 1; i <= N; i++) {
		printf("%d ", ball[i]);
	}
}
