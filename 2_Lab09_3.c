#include<stdio.h>
int main() {
	int N, M;
	scanf("%d %d", &N, &M);
	char pic[N][M+1];

	for (int i = 0; i < N; i++) {
		scanf("%s", pic[i]);
	}

	
	
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M/2; j++) { 
			if (pic[i][j] != '.') {
				pic[i][M - j-1] = pic[i][j]; //위치를 더할 때 M이 되면 됨

			}
			else if (pic[i][M-j-1] != '.') {
				pic[i][j] = pic[i][M - j - 1];  //j의 범위를 M으로 하면 출력초과나 나타나서 M/2까지 비교하고, 범위를 나눠서 이부분 추가

			}

		}
	}

	for (int i = 0; i < N; i++) {
		printf("%s\n", pic[i]);
	}
	return 0;
}