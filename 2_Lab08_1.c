/*#include<stdio.h>
int main() {
	int N;
	scanf("%d", &N);

	int lines[100001] = { 0 }; //�������κ�

	for (int i = 0; i < N; i++) {
		int x, y;
		scanf("%d %d", &x, &y);
		
		//x���� y ���� ������ �κп� lines�� 1�� �ٲ�
		for (int j = x; j < y; j++) {
			lines[j] = 1;
		}


	}

	int len = 0;
	for (int i = 0; i <= 100000; i++) {
		if (lines[i]) { //lines�� ���� �κ��� �ִ� ��쿡 ���̸� ����

			len++;
		}
	}
	printf("%d", len);
}*/