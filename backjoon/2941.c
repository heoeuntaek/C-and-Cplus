//#include <stdio.h>
//#include <stdlib.h> //srand, rand�� ����ϱ� ���� �������
//#include <time.h> // time�� ����ϱ� ���� �������
//
//int main() {
//	/*ljes = njak -> 3*/
//	//1. ���ĺ� �Է�
//	char a[100];
//	scanf("%s", a);
//	int count = 0;
//	//2. ũ�ξ�Ƽ�� ���ĺ� �迭
//	char* alpha[8] = { "c=", "c-","dz=","d-","lj", "nj","s=","z=" };
//	//����
//	//3. �迭�� ������ count++
//	for (int i = 0; i < strlen(a); i++) {
//
//		char three[4] = { 0, };
//		char two[3] = { 0, };
//
//		int index = i - 1;
//		//3��, 2��¥�� ����
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
//		//3��¥�� ��
//		if (strcmp(three, "dz=") == 0) {
//			i += 2;
//			count++;
//			continue;
//		}
//		int end = 0;
//
//		//2��¥�� ��
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
//		//1��¥���� �׳� �Ѿ
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