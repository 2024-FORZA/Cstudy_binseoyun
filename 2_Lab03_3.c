
//2460번
#include<stdio.h>
int main() {
	int in[10];
	int out[10];
	for (int i = 0; i < 10; i++) { //탄사람 내린사람 입력받음
		scanf("%d %d", &out[i], &in[i]);
	}

	int sum = 0;
	int count[10];
	int max = sum;
	for (int i = 0; i < 10; i++) {
		sum += in[i];
		sum -= out[i];
		
		if (sum > max) {
			max = sum;
		}

	}
	printf("%d", max);

}
