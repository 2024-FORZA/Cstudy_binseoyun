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
* ÃÊ±â 2ÀÇ 0½Â +1= 2   2*2
* 1¹ø  2ÀÇ 1½Â +1= 3  3*3
* 2¹ø 2ÀÇ 2½Â +1 = 5  5*5
*/