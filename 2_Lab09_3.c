#include<stdio.h>
int main() {
	int N, M;
	scanf("%d %d", &N, &M);
	char pic[N][M+1];

	for (int i = 0; i < N; i++) {
		scanf("%s", pic[i]);
	}

	
	
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M/2; j++) { 
			if (pic[i][j] != '.') {
				pic[i][M - j-1] = pic[i][j]; //��ġ�� ���� �� M�� �Ǹ� ��

			}
			else if (pic[i][M-j-1] != '.') {
				pic[i][j] = pic[i][M - j - 1];  //j�� ������ M���� �ϸ� ����ʰ��� ��Ÿ���� M/2���� ���ϰ�, ������ ������ �̺κ� �߰�

			}

		}
	}

	for (int i = 0; i < N; i++) {
		printf("%s\n", pic[i]);
	}
	return 0;
}