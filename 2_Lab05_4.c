/*//2711��
#include<stdio.h>
#include<string.h>
int main() {
	int T;
	scanf("%d", &T);
	int index; //��Ÿ �� ��ġ
	char c[1000][81]; //���ڿ�
	for (int i = 0; i < T; i++) {
		
		scanf("%d %s", &index, c[i]);

		int len = strlen(c[i]); //c�� ���̸� len���� ����
		//for (int j = index - 1; j < len; j++) {
		//	c[i][j] = '\0'; //���� index �κ��� ��������
		//	c[i][j] = c[i][j + 1]; //���� ���ڸ� ����

		//}
		//printf("%s\n", c[i]); 

		int k;
		for (k = 0; k < index - 1; k++) {
			printf("%c", c[i][k]);
		}
		for (int t = k + 1; t < len; t++) {
			printf("%c", c[i][t]);
		}
		printf("\n");
	}
	return 0;
}*/