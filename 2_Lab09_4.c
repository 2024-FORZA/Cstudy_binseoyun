#include<stdio.h>
#include<string.h>
int main() {
	char dist[50];
	scanf("%s", dist); //�׸��� ������ �Է¹���

	int s = strlen(dist);
	int h = 10; //ó�� ������ ������ 10cm�̴ϱ�

	for (int i = 1; i < s; i++) { //���� ������ �� ���� ������
		
		if (dist[i] == dist[i-1]) { //�� ���� ���ٸ�
			h += 5;

		}
		else   {
			h += 10;
		}
	}
	printf("%d", h);
}