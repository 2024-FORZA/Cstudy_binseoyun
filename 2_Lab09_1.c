#include<stdio.h>
int main() {
	//���ڿ��� �Է¹����� ������ �Է¹��� ��
	int A, B;
	scanf("%d %d", &A, &B);
	int a, b;
	a = A;
	b = B;

	int a_c = 0; //�ڸ����� �˾Ƴ��� ����
	int b_c = 0;

	while (a) { //a�� ���ڸ� ������ �˱� ���ؼ�
		a /= 10;
		a_c++;
	}
	
	while (b) { //b�� ���ڸ� ������ �˱� ���ؼ�
		b /= 10;
		b_c++;
	}
	

	while (a_c>0 || b_c>0) {
		if (a_c == b_c) { //�� ������ �ڸ����� ���ٸ�
			/*if (a_c == 1 && b_c == 1) {
				

				printf("%d", a_c + b_c);
			}
			else {
				printf("%d", (A / n(a_c)) + (B / n(b_c)));
			}
			*/
			int a_digit = A / n(a_c);
			int b_digit = B / n(b_c);
			printf("%d", a_digit + b_digit);

			A %= n(a_c);
			B %= n(b_c);
			a_c--; //�� ������ �ڸ����� �����ؼ� ���� �ڸ����� ���� �� �ְ�
			b_c--;
		}
 
		else if (a_c > b_c) { //a�� �ڸ����� �� ũ�ٸ�
			int a_digit = A / n(a_c);
			printf("%d", a_digit);
			A %= n(a_c);
			a_c--;
			
		}

		else if (a_c < b_c) {//b�� �ڸ����� �� ũ�ٸ�
			int b_digit = B / n(b_c);
			printf("%d",b_digit);
			B %= n(b_c);
			b_c--;
		}
		
	}
	return 0;
}



int n(int a_c) {
	int a_n = 1;  //�ڸ��� ��ŭ 10�� ����� ����� ����

	//123�̸� 100 1*10*10
	for (int i = a_c; i > 1; i--) {
		a_n *= 10;
	}
	return a_n;
	
}