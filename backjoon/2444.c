//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//int main() {
//	int a;
//	scanf("%d", &a);
//	int count = 0;
//	int nullCount = a;
//	int system = 0;
//
//	for (int i = 0; i < a * 2 - 1; i++) {
//		//���� ���϶��
//		if (nullCount == 0||system==1) {
//			system = 1;
//			nullCount++;
//		}
//		else { nullCount--; }
//
//
//		for (int z = 0; z < nullCount; z++) {
//			printf(" ");
//		}
//
//
//		if (i <= a - 1) {
//			if (count == 0)count++;
//			else { count += 2; }
//			// 1+2*i =����
//			for (int j = 0; j < count; j++) {
//				printf("*");
//			}
//
//		}
//		//���� �̻��̶��
//		else {
//			count -= 2;
//			for (int j = 0; j < count; j++) {
//				printf("*");
//			}
//		}
//		printf("\n");
//	}
//}
