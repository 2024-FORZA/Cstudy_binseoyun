// 1292번 쉽게 푸는 문제
#include<stdio.h>
int main() {
	int A, B;
	scanf("%d %d", &A, &B);
	int total = 0;
	for (int i = A; i <= B; i++) {
		int j = 1;
		int sum = 0;
		while (1) {
			if (sum >= i) {
				
				break;
			}
			sum += j;
			j++;
		}
		j -= 1;
		total += j;
	}
	printf("%d", total);
}