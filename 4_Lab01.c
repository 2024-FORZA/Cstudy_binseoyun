//2839��
#include<stdio.h>
int main() {
	int N;
	scanf("%d", &N);

	int count = 0;

	while (N >= 0) {
		if (N % 5 == 0) { //N�� 5�� ������ ��������
			count += (N / 5);
			printf("%d\n", count);
			return 0;  //N�� 5�� ������ �������� ����ϰ� �����Ѵ�.

		}
		else { //5�� ������ �������� �ʴ´ٸ�
			N -= 3; //3kg���� ��� �� (5kg���� ������ ������ ���� ���� �� ����)
			count++;
		}
		

	}
	printf("-1");
	return 0;
}
