#include<stdio.h>
int reverse(int result);

int main() {
	int N, K;

	scanf("%d %d", &N, &K);

	int max = 0;
	for (int i = 1; i <= K; i++) {
		int result = N * i;
		int result_reverse = reverse(result);

		if (result_reverse > max) {
			max = result_reverse;
		}

	}
	printf("%d", max);
	

	

	//N % 10 �ϸ�
	//8,6,4,2,0,8,6,4,2 �� �ǰ�, N%10 ���� �� ���� ū ���� 8������
		//8�߿� ���� ���ϰ�, N/10�� �ϸ� ù°�ڸ����� ������ 
		//�� ��
}

int reverse(int result) { //2�ڸ� ���� ������� ����Ǿ��⿡ �����߻�
	int reversed;
	while (result > 0) {
		
	}
	return (result % 10) * 10 + result / 10;
}