#include<stdio.h>
#include <string.h>
int main() {
	int P;
	scanf("%d", &P);
	char coin[1000][41];
	int count[8] = { 0 }; //8���� ��찡 �������


	for (int i = 0; i < P; i++) {
		scanf("%s", coin[i]);
		for (int j = 0; j < 38; j++) {
			char sub[4];
			sub[0] = coin[i][j];
			sub[1] = coin[i][j + 1];
			sub[2] = coin[i][j + 2];
			sub[3] = '\0';
			if (strcmp(sub, "TTT") == 0) { //coin[i][j]�� ����ϸ� ���ڿ� �񱳰� 3���� �ȵǴ� �迭 ������ sub�������� �� sub���ڿ� ��

				count[0]++;
			}
			else if (strcmp(sub, "TTH") == 0) {
				count[1]++;
			}
			else if (strcmp(sub, "THT") == 0) {
				count[2]++;
			}
			else if (strcmp(sub, "THH", 3) == 0) {
				count[3]++;
			}
			else if (strcmp(sub, "HTT", 3) == 0) {
				count[4]++;
			}
			else if (strcmp(sub, "HTH", 3) == 0) {
				count[5]++;
			}
			else if (strcmp(sub, "HHT", 3) == 0) {
				count[6]++;
			}
			else if (strcmp(sub, "HHH", 3) == 0) {
				count[7]++;
			}



		}
        for (int i = 0; i < 8; i++) {
			printf("%d", count[i]);
		}
		printf(" ");
	}



}