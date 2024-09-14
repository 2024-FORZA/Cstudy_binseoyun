#include<stdio.h>
int main() {
	int A, B;
	scanf("%d %d", &A, &B);
	int time = A * 60 + B; //현재시각을 분으로
	int C;
	scanf("%d", &C);
	int hour = C + time; //필요한 시각을 더한 것

	int t = hour / 60;
	int m = hour % 60;
	if (t >= 24) {
		t -= 24;
	}
	printf("%d %d", t, m);
	return 0;

}
