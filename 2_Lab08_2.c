
/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int a, b, c; //H,M,D 시 뭔지 모르는 상태의 세변수
	
	
	char time[8];
	scanf("%s",time);
	


	//:을 기준으로 문자열 분리
	char* token = strtok(time, ":");
	a = atoi(token);

	token = strtok(NULL, ":");
	b = atoi(token);

	token = strtok(NULL, ":");
	c = atoi(token);

	
	int count = 0;
	if (time_check(a, b, c)) {
		count++;
	}
	if (time_check(a, c, b)) {
		count++;

	}
	if (time_check(b, a, c)) {
		count++;
	}
	if (time_check(b, c, a)) {
		count++;
	}
	if (time_check(c, a, b)) {
		count++;
	}
	if (time_check(c, b, a)) {
		count++;
	}
	printf("%d", count);
	return 0;
}

int time_check(int h, int m, int s) {
	if ((h > 0 && h <= 12) && (m >= 0 && m <= 59) && (s >= 0 && s <= 59)) {
		return 1;
	}
	else {
		return 0;
	}

}*/