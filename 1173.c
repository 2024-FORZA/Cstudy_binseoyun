#include<stdio.h>
int main() {
	int N, m, M, T, R;
	scanf("%d %d %d %d %d", &N, &m, &M, &T, &R);

	/*T:�����ϴ� �ƹ�
	  M:�ִ�ƺ�
	  R:�����ϴ� �ƹ�
	  m:�ּҸƹ�,�ʱ�ƹ�
	  N:��ð�*/
	int count = 0; //������� �ð�
	int time = 0; //���� ��� �� �ð�
	int X = m;//���� �ƹ�

	if (X + T > M) {
		printf("-1\n");
		return 0;
		
	}
	while (time<N) 
	{
		

		if (X + T <= M) {
			
			X += T;
			time += 1;

		}

		
		else {
			
			X -= R;
			
			
			if (X < m) {
				X = m;
			}
			
		}


		count += 1;


	}
	
	printf("%d\n", count);

}