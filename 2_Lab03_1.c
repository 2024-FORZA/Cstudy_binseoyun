/*
//1157��
#include<stdio.h>
#include<string.h>
#include<ctype.h> //�ҹ��ڸ� �빮�ڷ� �����ϱ� ����
int main() {
	char word[1000001];
	scanf("%s", word);
	int len = strlen(word);

	
	for (int i = 0; i < len; i++) {
		word[i] = toupper(word[i]);

	}
	
	int count[26] = { 0 };//���ĺ��� 26��, ���ĺ��� �󵵸� ����, index�κп��� ���ĺ�, value�κп� ���ĺ��� ��

	for (int i = 0; i < len; i++) {
		count[word[i] - 'A'] += 1;
	}

	int max = 0;
	int duplicate = 0;
	int max_index = -1;
	for (int i = 0; i < 26; i++) {
		if (count[i] > max) {
			max = count[i];
			max_index = i;
			duplicate = 0;
		}
		else if (count[i] == max) {
			duplicate = 1;
		}
	}
	if (duplicate) {
		printf("?");
	}
	else {
		printf("%c", max_index+'A'); //word[i] - 'A' ���� max_idex�϶��� ���ĺ��̴�
	}
	return 0;
}*/