//11720
#include<stdio.h>
#include<string.h>

int main() {
	int N;
	scanf("%d", &N);

	char num[101];
	scanf("%s", num);

	long long sum = 0;
	for (int i = 0; i < N; i++) {
		
		sum += num[i]-'0';

	}
	printf("%lld\n", sum);
	return 0;
}
