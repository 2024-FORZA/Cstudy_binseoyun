#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main() {
	char num[10000];
	scanf("%s", num);

	int mul1; //���ݺ��� ��
	int mul2; //�Ĺݺ��� ��
	int y = 0;
	if (strlen(num) == 1) {
		printf("NO");
		return 0;
	}

	for (int i = 0; i < strlen(num); i++) {
		mul1 = 1;
		mul2 = 1;
		for (int j = 0; j <= i; j++) {
			mul1 *= (num[j] - '0');
			

		}
		for (int k = i + 1; k < strlen(num); k++) {
			mul2 *= (num[k] - '0');
			
		}

		if (mul1 == mul2) {
			y = 1;  //�������� �� 1��
			break;
		}
	}
	if (y == 1) {
		printf("YES");
		
	}
	else {
		printf("NO");
	}
}