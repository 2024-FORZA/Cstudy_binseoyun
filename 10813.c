#include<stdio.h>
int main() {
	int N, M;
	scanf("%d %d", &N, &M);
	int ball[101] = { 0 };
	ball[0] = 0;
	for (int i = 1; i <= N; i++) { // N=5, 0,1,2,3,4,5 ball[N+1]�� ��������� ��

		ball[i] = i; //�迭��index�� �ٱ��� ��ȣ�� ��ȣ�� ����
	}

	int temp;
	for (int k = 0; k < M; k++) { //M�� �ݺ�
		int i, j = 0;
		scanf("%d %d", &i, &j);
		
		temp = ball[i];
		ball[i] = ball[j];
		ball[j] = temp;
	}
	for (int i = 1; i <= N; i++) {
		printf("%d ", ball[i]);
	}
}