#include<stdio.h>
int main() {
	int A, B;
	scanf("%d %d", &A, &B);
	int time = A * 60 + B; //����ð��� ������
	int C;
	scanf("%d", &C);
	int hour = C + time; //�ʿ��� �ð��� ���� ��

	int t = hour / 60;
	int m = hour % 60;
	if (t >= 24) {
		t -= 24;
	}
	printf("%d %d", t, m);
	return 0;

}