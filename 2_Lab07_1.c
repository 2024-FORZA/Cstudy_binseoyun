/*#include<stdio.h>
int main() {
	//N���� �л��� ������ �ֱ�� ����
	//�ʴ��� ����
	int N,C; //�л���, ���׼ ������ �ð�
	scanf("%d %d", &N, &C);
	int cycles[100]; //�ֱ� ����
	
	for (int i = 0; i < N; i++) { //�ֱ� �Է�
		scanf("%d", &cycles[i]);
		}
		
	int fire[2000000] = { 0 }; //������ ������ �ʸ� �ε����� �ϰ� ������ 1�� ǥ��
	for (int i = 0; i < N; i++) {
		for (int j = cycles[i]; j <= C; j += cycles[i]) {
			fire[j] = 1;
		}
	}



	
	int count = 0;
	for (int i = 1; i <= C; i++) { //1�ʺ��� C�ʱ���
		if (fire[i]) {
			count++;
		}

	}
	printf("%d", count);

}*/