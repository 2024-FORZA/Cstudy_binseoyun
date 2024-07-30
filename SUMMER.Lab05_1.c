//3052

#include<stdio.h>
int main() {
	int num[10];
	int n;

	int count = 0;
	int result[42] = { 0 }; //나머지가 0부터 42일때 각각 수를 저장

	for (int i = 0; i < 10; i++) {
		scanf("%d", &n);
		num[i] = (n % 42);
		result[num[i]] += 1; //나머지의 개수를 업데이트 함


	}
	for (int i = 0; i < 42; i++) {
		if (result[i] > 0) {
			count += 1;
		}
	}
	printf("%d\n", count);
	return 0;
}
