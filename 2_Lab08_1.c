/*#include<stdio.h>
int main() {
	int N;
	scanf("%d", &N);

	int lines[100001] = { 0 }; //지나간부분

	for (int i = 0; i < N; i++) {
		int x, y;
		scanf("%d %d", &x, &y);
		
		//x부터 y 까지 지나는 부분에 lines를 1로 바꿈
		for (int j = x; j < y; j++) {
			lines[j] = 1;
		}


	}

	int len = 0;
	for (int i = 0; i <= 100000; i++) {
		if (lines[i]) { //lines가 지난 부분이 있는 경우에 길이를 더함

			len++;
		}
	}
	printf("%d", len);
}*/