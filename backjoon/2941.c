//#include <stdio.h>
//#include <stdlib.h> //srand, rand를 사용하기 위한 헤더파일
//#include <time.h> // time을 사용하기 위한 헤더파일
//
//int main() {
//	/*ljes = njak -> 3*/
//	//1. 알파벳 입력
//	char a[100];
//	scanf("%s", a);
//	int count = 0;
//	//2. 크로아티아 알파벳 배열
//	char* alpha[8] = { "c=", "c-","dz=","d-","lj", "nj","s=","z=" };
//	//생성
//	//3. 배열에 있으면 count++
//	for (int i = 0; i < strlen(a); i++) {
//
//		char three[4] = { 0, };
//		char two[3] = { 0, };
//
//		int index = i - 1;
//		//3개, 2개짜리 생성
//		for (int j = 0; j < 3; j++) {
//			index++;
//			if (index < strlen(a)) {
//
//				three[j] = a[index];
//				if (j == 2)
//				{
//					continue;
//				}
//				two[j] = a[index];
//			}
//
//		}
//		//3개짜리 비교
//		if (strcmp(three, "dz=") == 0) {
//			i += 2;
//			count++;
//			continue;
//		}
//		int end = 0;
//
//		//2개짜리 비교
//		for (int z = 0; z < 8; z++) {
//			
//			int stack = 0;
//
//			for (int a = 0; a < 2; a++) {
//				if (strcmp(&(alpha[z][a]), &(two[a])) == 0) {
//					stack++;
//					if (stack == 2) {
//						i++;
//						count++;
//						end = 1;
//					}
//
//				}
//				else 	break;
//				
//			}
//		}
//		if (end == 1) {
//			continue;
//		}
//		count++;
//		//1개짜리는 그냥 넘어감
//
//
//	}
//
//	printf("%d", count);
//
//	return 0;
//
//
//}