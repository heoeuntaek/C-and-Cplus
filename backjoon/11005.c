//#include <stdio.h>
//#include <string.h>
//
//int main() {	
//
//	int n;   //�ڿ��� 10
//	int b; //����  2
//
//	char arr[35] = {0};
//	int rest; //������
//	int share; // ��
//	scanf("%d %d", &n, &b);
//	
//	share = n;
//	int i = 0;
//	while (share != 0) {
//		rest = share % b;
//		share = share / b;
//		if (rest > 9) {
//			arr[i] = rest + 55;	
//			
//		}
//		else {
//			arr[i] = rest + 48;
//			// rest(����)�� ���ڷ�
//		}
//		i++;
//	}
//	
//	for (int i = 0; i < strlen(arr)/2; i++) {
//		char tmp = arr[i];
//		arr[i] = arr[strlen(arr) - i-1];
//		arr[strlen(arr) - i-1] = tmp;
//
//	}
//	for (int i = 0; i < strlen(arr); i++) {
//		printf("%c", arr[i]);
//	}
//	
//
//	return 0;
//}