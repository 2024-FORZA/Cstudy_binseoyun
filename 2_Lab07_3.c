#include<stdio.h>
int main() {
	int N;
	scanf("%d", &N);
	
	int sum =0;
	int n = 1;
	for (int i = 0; i < N; i++){
		n *= 2;
		int plus=n+ 1;
		plus *= plus;
		sum = plus;
	}
	printf("%d", sum);
	
}




/*
* �ʱ� 2�� 0�� +1= 2   2*2
* 1��  2�� 1�� +1= 3  3*3
* 2�� 2�� 2�� +1 = 5  5*5
*/