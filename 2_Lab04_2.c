#include<stdio.h>
int reverse(int result);

int main() {
	int N, K;

	scanf("%d %d", &N, &K);

	int max = 0;
	for (int i = 1; i <= K; i++) {
		int result = N * i;
		int result_reverse = reverse(result);

		if (result_reverse > max) {
			max = result_reverse;
		}

	}
	printf("%d", max);
	

	

	//N % 10 하면
	//8,6,4,2,0,8,6,4,2 가 되고, N%10 했을 때 가장 큰 수가 8임으로
		//8중에 값을 비교하고, N/10을 하면 첫째자리수가 나오니 
		//그 중
}

int reverse(int result) { //2자리 만들 대상으로 설계되었기에 오류발생
	int reversed;
	while (result > 0) {
		
	}
	return (result % 10) * 10 + result / 10;
}