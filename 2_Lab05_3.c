/*/2851¹ø ½´ÆÛ ¸¶¸®¿À
#include<stdio.h>
int main() {
	int num[10]; //10°³ÀÇ ¹ö¼¸
	int sum = 0;
	int sum_before, sum_after = 0;

	for (int i = 0; i < 10; i++) {
		scanf("%d", &num[i]);
		
	}
	
	for (int i = 0; i < 10; i++) {
		sum += num[i];
		if (sum <= 100) {
			sum_before = sum;
		}
		else {
			sum_after = sum;
			break;
		}
	}
	if (sum_after == 0) {
		printf("%d", sum_before);
	}
	else {
		if (100 - sum_before == sum_after - 100) {
			printf("%d\n", sum_after);
		}
		else {
			printf("%d\n", (100 - sum_before <= sum_after - 100) ? sum_before : sum_after);
		}
	}
	return 0;
}*/