/*
//1157번
#include<stdio.h>
#include<string.h>
#include<ctype.h> //소문자를 대문자로 변경하기 위해
int main() {
	char word[1000001];
	scanf("%s", word);
	int len = strlen(word);

	
	for (int i = 0; i < len; i++) {
		word[i] = toupper(word[i]);

	}
	
	int count[26] = { 0 };//알파벳이 26개, 알파벳의 빈도를 저장, index부분에는 알파벳, value부분엔 알파벳별 빈도

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
		printf("%c", max_index+'A'); //word[i] - 'A' 값이 max_idex일때의 알파벳이니
	}
	return 0;
}*/