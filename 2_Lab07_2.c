#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char array[20000][51];

int stringcomp(char* brray, char* crray) //qsort ���� �Լ� ȣ��� �迭�� ��� �ּҸ� �����ϱ⿡ ������ ����
{
	int x = strlen(brray);
	int y = strlen(crray);

	//�ܾ��� ���̸� ������
	if (x < y) return -1; //brray �� ���̰� crray�� ���̺��� ª������ -1�� ��ȯ�Ͽ�
	//brray�� crray���� �տ� ��ġ

	else if (x > y) return 1;


	//�ܾ��� ���̰� ���ٸ� ���ĺ�������
	else
	{
		return strcmp(brray, crray);
	}
}
//stringcomp �Լ����� ��ȯ���� ����� �迭�� ����
//����(-1): ù��° ���ڿ��� �ι�° ���ڿ� ���� �տ�
//0: �� ���ڿ��� �����Ƿ� ��ġ�� �ٲ��� ����
//���(1): ù ��° ���ڿ��� �ι� ¹ ���ڿ� ���� �ڿ�
//=>stringcomp ��ȯ���� �� ���ڿ��� ������� ��ġ�� ����

int main()
{
	int i, N;
	scanf("%d", &N);
	for (i = 0; i < N; i++)
	{
		scanf("%s", &array[i]);
	}
	//qsort �� �̿��ؼ� array �迭�� ����(�ܾ��� ���̰� ª�� �� ������)
	qsort(array, N, 51 * sizeof(char), stringcomp);
	//array�� ������ �迭�� ���� �ּ�
	//N �� �迭 ��� ����(�ܾ��� ����)
	//51*sizeof(char) �� �� ����� ũ��, �� ���ڿ��� �ִ� 50���� �̹Ƿ�
	//stringcomp,�� ����Լ�, �� �Լ��� ��ȯ���� ����� qsort() �� �迭 ����� ������ ����


   //array[0] ���� ����� ���� ���� ���ؼ� ���� �ܾ �������
	printf("%s\n", array[0]);
	for (i = 1; i < N; i++)
	{
		if (strcmp(array[i - 1], array[i])!=0) //���Ǵܾ�� �ھ� �ܾ ���� ���� ��
			printf("%s\n", array[i]);
	}
	return 0;
}