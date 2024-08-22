//8958
#include<stdio.h>
#include<string.h>

int main() {
	int N;
	scanf("%d",&N);
	char test[80];
	for (int i = 0; i < N; i++) {
		scanf("%s", test);

		int len = strlen(test);
		int sum = 0;
		int bonus = 0;

		for (int i = 0; i < len; i++) {
			if (test[i] == 'O') {
				bonus++;
				sum += bonus;
			}
			else if (test[i] == 'X') {
				bonus = 0;
			}



		}
		printf("%d\n", sum);
	}

	return 0;
	
	
}
