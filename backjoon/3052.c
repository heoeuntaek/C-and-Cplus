//#include <stdio.h>
//
//int main() {
//	int arr[10], arrResult[10], arrNew[10];
//	for (int i = 0; i < 10; i++) {
//		arrNew[i] = -1;
//	}
//
//	for (int i = 0; i < 10; i++) {
//		scanf("%d", &arr[i]);
//		arrResult[i] = arr[i] % 42;
//
//	}
//	for (int i = 0; i < 9; i++) {
//		for (int j = i + 1; j < 10; j++) {
//			if (arrResult[i] == arrResult[j]) {
//				arrResult[i] = -1;
//				continue;
//			}
//		}
//	}
//	int j = 0;
//	for (int i = 0; i < 10; i++) {
//		
//		if (arrResult[i] == -1) continue;
//		arrNew[j] = arrResult[i];
//		j++;
//
//	}
//	int x = sizeof(arrNew) / sizeof(int);
//	int count = 0;
//	for (int i = 0; i < 10; i++) {
//		if (arrNew[i] != -1)count++;
//		
//	}
//
//	printf("%d", count);
//
//
//	return 0;
//}