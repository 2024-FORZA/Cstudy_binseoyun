/*//2711번
#include<stdio.h>
#include<string.h>
int main() {
	int T;
	scanf("%d", &T);
	int index; //오타 낸 위치
	char c[1000][81]; //문자열
	for (int i = 0; i < T; i++) {
		
		scanf("%d %s", &index, c[i]);

		int len = strlen(c[i]); //c의 길이를 len으로 지정
		//for (int j = index - 1; j < len; j++) {
		//	c[i][j] = '\0'; //원래 index 부분을 삭제한후
		//	c[i][j] = c[i][j + 1]; //다음 문자를 넣음

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