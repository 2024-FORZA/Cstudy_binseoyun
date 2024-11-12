/*#include<stdio.h>
int main() {
	int len;
	scanf("%d", &len);

	char name[101];
	scanf("%s", name);

	char alphabet[27] = { 0 };
	for (int i = 0; i <= 26; i++) {
		alphabet[i] = i+1; //인덱스에는 알파벳이
		                   //아스키 코드로, 값에는 값
	}
	int sum = 0;
	for (int i = 0; i < len; i++) {
		for (int j = 0; j < 27; j++) {
			if (name[i] - 'A' == j) {
				sum += alphabet[j];
			}
		}
	}
	printf("%d", sum);
}*/