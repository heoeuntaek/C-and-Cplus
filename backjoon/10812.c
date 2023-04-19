//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//int main() {
//	int n, m;
//	scanf("%d %d", &n, &m);
//	int arr[100];
//	int newArr[100];
//	for (int i = 1; i < n+1; i++) {
//		arr[i] = i;
//	}
//	int i, j, k;
//	for (int z = 0; z < m; z++) {
//		scanf("%d %d %d", &i, &j, &k);   //1,6,4
//		int OriginI = i;
//		for (i; i < j + 1; i++) {
//			if (k > j) {
//				newArr[i] = arr[k % (j + 1) + OriginI];
//			}
//			else { newArr[i] = arr[k]; }
//			k++;
//
//		}
//		for (OriginI; OriginI < j + 1; OriginI++) {
//			arr[OriginI] = newArr[OriginI];
//		}
//
//	}
//	
//	for (int i = 1; i < n+1; i++) {
//		printf("%d ", arr[i]);
//	}
//}
