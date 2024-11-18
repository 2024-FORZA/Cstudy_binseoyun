#include<stdio.h>
int main() {
	//문자열로 입력받을지 정수로 입력받을 지
	int A, B;
	scanf("%d %d", &A, &B);
	int a, b;
	a = A;
	b = B;

	int a_c = 0; //자리수를 알아내기 위해
	int b_c = 0;

	while (a) { //a가 몇자리 수인지 알기 위해서
		a /= 10;
		a_c++;
	}
	
	while (b) { //b가 몇자리 수인지 알기 위해서
		b /= 10;
		b_c++;
	}
	

	while (a_c>0 || b_c>0) {
		if (a_c == b_c) { //두 숫자의 자릿수가 같다면
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
			a_c--; //두 문자의 자릿수를 감소해서 다음 자릿수를 비교할 수 있게
			b_c--;
		}
 
		else if (a_c > b_c) { //a의 자릿수가 더 크다면
			int a_digit = A / n(a_c);
			printf("%d", a_digit);
			A %= n(a_c);
			a_c--;
			
		}

		else if (a_c < b_c) {//b의 자릿수가 더 크다면
			int b_digit = B / n(b_c);
			printf("%d",b_digit);
			B %= n(b_c);
			b_c--;
		}
		
	}
	return 0;
}



int n(int a_c) {
	int a_n = 1;  //자릿수 만큼 10의 배수로 만들기 위해

	//123이면 100 1*10*10
	for (int i = a_c; i > 1; i--) {
		a_n *= 10;
	}
	return a_n;
	
}