//1568번
#include<stdio.h>
int main() {
	int N;
	scanf("%d", &N);

	int K = 1; //현재 숫자
	int count = 0; //총시간
	
	while (1) {
		if (N == 0) {
			break;
		}
		
		if (K < N) {
			K = 1; //1부터 다시 게임시작
		}
		else {
			N -= K; //K마리의 새들이 날라감
			count++;
			K++; //날라가는 새의 수 증가, 숫자 증가
			

		}
	}
	printf("%d\n", count);
	return 0;
}