/*#include<stdio.h>
int main() {
	while (1) {
		int i;
		scanf("%d", &i);
		if (i == -1) {
			break;
		}
		int num[5000];
		int sum = 0;
		int count = 0;
		for (int a = 1; a < i; a++) {
			if (i % a == 0) {
				num[count++] = a;
				sum += a;
				
			}


			
		}
		if (sum == i) {
			printf("%d =");
			for (int j = 0; j < count; j++) {
				if (j == count-1) {
					printf(" %d",num[j]);
				}
				

				else{
					printf(" %d +", num[j]);
			}
				

			}
			printf("\n");
		}
		
		else {
			printf("%d is NOT perfect.\n",i);

		}
		
	}
	return 0;
}*/