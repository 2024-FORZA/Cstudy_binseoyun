//2741번
#include<stdio.h>
#include<string.h>
int main() {
	int T;
	scanf("%d",&T);
	
	for (int i = 0; i < T; i++) {//테스트 케이스에 대한 제한
		int R;
		char S[21];
		scanf("%d %s", &R, S);

		for (int j = 0; j < strlen(S); j++) {

			for (int a = 0; a < R; a++) {
				printf("%c", S[j]);
			}
		}
		printf("\n");

	}
	return 0;

}
