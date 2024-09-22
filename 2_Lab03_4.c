/*
//2863¹ø
#include<stdio.h>

int main() {
	int A, B, C, D;
	scanf("%d %d", &A, &B);
	scanf("%d %d", &C, &D);
	double num[4];
	for(int i=0; i<4; i++){
		num[i] = (double)A / C + (double)B / D;
		
		 int temp = A;
		 A = C;
		 C = D;
		 D = B;
		 B = temp;

		
	}

	int max = num[0];
	int count = 0;
	for (int i = 0; i < 4; i++) {
		if (max < num[i]) {
			max = num[i];
			count = i;
		}
		
	}
	printf("%d", count);

}*/