/*#include<stdio.h>
	int main() {
		int t;
		scanf("%d", &t);
		for(int i=0; i<t; i++) {
			int n;
			scanf("%d", &n);

			int square = n * n;
			int len = 1;

			//�ڸ��� ������ִ°� �ʿ�
			int temp = n;
			while (temp>0) {
				temp /= 10;
				len *= 10;
			}

			
			if (square%len==n) {
				printf("YES\n");
			}
			else {
				printf("NO\n");
			}


		}
		return 0;


}*/