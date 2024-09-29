//2839번
#include<stdio.h>
int main() {
	int N;
	scanf("%d", &N);

	int count = 0;

	while (N >= 0) {
		if (N % 5 == 0) { //N이 5로 나누어 떨어지면
			count += (N / 5);
			printf("%d\n", count);
			return 0;  //N이 5로 나누어 떨어지면 출력하고 종료한다.

		}
		else { //5로 나누어 떨어지지 않는다면
			N -= 3; //3kg으로 계속 뺌 (5kg으로 나누어 떨어질 수가 나올 때 까지)
			count++;
		}
		

	}
	printf("-1");
	return 0;
}
