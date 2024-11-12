#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char array[20000][51];

int stringcomp(char* brray, char* crray) //qsort 에서 함수 호출시 배열의 요소 주소를 전달하기에 포인터 선언
{
	int x = strlen(brray);
	int y = strlen(crray);

	//단어의 길이를 비교해줌
	if (x < y) return -1; //brray 의 길이가 crray의 길이보다 짧음으로 -1을 반환하여
	//brray가 crray보다 앞에 위치

	else if (x > y) return 1;


	//단어의 길이가 같다면 알파벳순으로
	else
	{
		return strcmp(brray, crray);
	}
}
//stringcomp 함수에서 반환값을 사용해 배열을 정렬
//음수(-1): 첫번째 문자열이 두번째 문자열 보다 앞에
//0: 두 문자열이 같으므로 위치를 바꾸지 않음
//양수(1): 첫 번째 문자열이 두번 쨔 문자열 보다 뒤에
//=>stringcomp 반환값은 두 문자열의 상대적인 위치를 결정

int main()
{
	int i, N;
	scanf("%d", &N);
	for (i = 0; i < N; i++)
	{
		scanf("%s", &array[i]);
	}
	//qsort 를 이용해서 array 배열을 정렬(단어의 길이가 짧은 것 순으로)
	qsort(array, N, 51 * sizeof(char), stringcomp);
	//array는 정렬한 배열의 시작 주소
	//N 은 배열 요소 개수(단어의 개수)
	//51*sizeof(char) 는 각 요소의 크기, 각 문자열은 최대 50글자 이므로
	//stringcomp,는 비료함수, 이 함수의 반환값을 사용해 qsort() 는 배열 요소의 순서를 결정


   //array[0] 먼저 출력후 뒤의 것을 비교해서 없는 단어만 출력해줌
	printf("%s\n", array[0]);
	for (i = 1; i < N; i++)
	{
		if (strcmp(array[i - 1], array[i])!=0) //앞의단어와 뒤어 단어가 같지 않을 때
			printf("%s\n", array[i]);
	}
	return 0;
}