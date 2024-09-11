#include<stdio.h>
int Y_call(int x);
int M_call(int x);
int main() {
	int N;
	scanf("%d", &N);
	int call[20];
	for (int i = 0; i < N; i++) {
		scanf("%d", &call[i]);
	}
	int Y = 0;
	int M = 0;
	for (int i = 0; i < N; i++) {
		Y+= Y_call(call[i]);
		M += M_call(call[i]);
	}
	
	if (Y < M) {
		printf("Y %d", Y);
	}
	else if(M<Y){
		printf("M %d", M);
	}
	else if (M == Y) {
		printf("Y M %d", Y);
	}

}
int Y_call(int x) {
	return (x / 30 + 1) * 10;
}
int M_call(int x) {
	return (x / 60 + 1) * 15;
}
