//#include <stdio.h>
//#include <stdlib.h> //srand, rand�� ����ϱ� ���� �������
//#include <time.h> // time�� ����ϱ� ���� �������
//
//
//int main(void) {
//	//��� ���ϱ�
//	int a;
//	int k;
//	scanf("%d %d", &a, &k);
//	int arr[10000] = { a+1 };
//	int b = 0;
//	for (int i = 1; i < a + 1; i++) {
//		if (a % i == 0) {  
//			arr[b] = i;
//			b++;
//
//		}
//	}
//	
//	
//	int answer = 0;
//	for (int i = 0; i < k; i++) {
//		if (arr[i] > a)continue;
//		if (arr[i] == -1) answer =0;
//		answer = arr[i];
//	}
//
//	printf("%d", answer);
//
//
//
//	return 0;
//}