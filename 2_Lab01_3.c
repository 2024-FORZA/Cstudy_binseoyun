#include<stdio.h>
int main() {
	int A, B, C;
	scanf("%d %d %d", &A, &B, &C);
	int mul = A * B * C;
	int num[10] = { 0 };

	while (mul > 0) {
		int pos = mul % 10;
		num[pos] += 1;
		mul /= 10;
	}

	for (int i = 0; i < 10; i++) {
		printf("%d\n", num[i]);

	}
	return 0;
}
