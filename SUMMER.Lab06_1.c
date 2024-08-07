//1037

#include<stdio.h>
int main() {
	int count;
	scanf("%d", &count);
	int a[100];
	int mul = 1;
	for (int i = 0; i < count; i++) {
		
		scanf("%d", &a[i]);
		
		
		

	}  //단순히 처음 입력된 값과 마지막 값을 곱하여 오류발생, 가장 작을 값과 큰 값을 곱하면 정답
	int min = a[0];
	int max = a[0];
	for (int i = 0; i < count; i++) {
		if (min > a[i]) {
			min = a[i];
		}
		if (max < a[i]) {
			max = a[i];
		}
	}
	mul = min * max;
	printf("%d", mul);
	return 0;
}
