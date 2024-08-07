//1547
#include<stdio.h>
int main() {
	int ballPosition[4] = { 0,1,0,0 }; //ball의 위치에 대한 배열
	int M;
	scanf("%d", &M); //컵의 위치를 바꾼 횟수
	for (int i = 0; i < M; i++) {
		int x, y;
		scanf("%d %d", &x, &y);
		int temp;
		temp = ballPosition[x];
		ballPosition[x] = ballPosition[y];
		ballPosition[y] = temp;

	}

	for (int i = 0; i < 4; i++) {
		if (ballPosition[i] == 1) {
			printf("%d", i);
			break;
		}
		
	}
	return 0;

}
