//1568��
#include<stdio.h>
int main() {
	int N;
	scanf("%d", &N);

	int K = 1; //���� ����
	int count = 0; //�ѽð�
	
	while (1) {
		if (N == 0) {
			break;
		}
		
		if (K < N) {
			K = 1; //1���� �ٽ� ���ӽ���
		}
		else {
			N -= K; //K������ ������ ����
			count++;
			K++; //���󰡴� ���� �� ����, ���� ����
			

		}
	}
	printf("%d\n", count);
	return 0;
}