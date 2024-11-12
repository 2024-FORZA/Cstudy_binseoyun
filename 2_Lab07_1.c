/*#include<stdio.h>
int main() {
	//N명의 학생이 일정한 주기로 폭죽
	//초단위 관찰
	int N,C; //학생수, 폭죽쇼가 끝나는 시간
	scanf("%d %d", &N, &C);
	int cycles[100]; //주기 저장
	
	for (int i = 0; i < N; i++) { //주기 입력
		scanf("%d", &cycles[i]);
		}
		
	int fire[2000000] = { 0 }; //폭죽이 터지는 초를 인덱스로 하고 터지면 1로 표시
	for (int i = 0; i < N; i++) {
		for (int j = cycles[i]; j <= C; j += cycles[i]) {
			fire[j] = 1;
		}
	}



	
	int count = 0;
	for (int i = 1; i <= C; i++) { //1초부터 C초까지
		if (fire[i]) {
			count++;
		}

	}
	printf("%d", count);

}*/