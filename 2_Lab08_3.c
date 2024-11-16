#include<stdio.h>
int main() {
	int T;
	scanf("%d", &T); //테스트 케이스 개수
	for (int i = 0; i < T; i++) {
		int a, b;
		scanf("%d %d", &a, &b);
		
		
		 int n = a;
		for (int j = 1; j <= b; j++) { //a의 b 승
			//0승은 숫자 그래로니깐 곱하지 않고, 1승 부터 제곱할 수 있게 조건 줌
			if (j > 1) {
				n = n % 10; //맨 마지막 숫자만 곱하면 되니깐 마지막 숫자만 추출
				n =n*a; //마지막 숫자에 a를 곱해서 제곱의 형태로 만듦
			}
			
		}
		
		if (n % 10==0) { //10,20,30번 같은 10의 배수는 10
			printf("%d\n",10);
		}
		else {
			printf("%d\n",n%10);
		}
		

		
	}
}

