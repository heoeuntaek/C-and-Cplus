#include <stdio.h>
#include <string.h>

int main() {
	char n[100];  //��
	int b;  //����
	int sum = 0;
	//int mul = 3;
	//int f = 3;
	//for (int j = 0; j < 2; j++) {
	//	mul = mul * f;
	//}
	//printf("%d\n", mul);

	/*printf("���� : %d\n", 'Z'-87);
	printf("����2:  %d\n", '1');*/

	scanf("%s %d", &n, &b);
	// 2~10�����ϋ���


	
	int digit = strlen(n);
	for (int i = digit - 1; i >= 0; i--) {
		//b�� ����
		//b �� i��
		int mul = b;

		if (i == 0) {
			mul = 1;
		}
		else {
			for (int j = 0; j < i - 1; j++) {

				mul = mul * b;
			}
		}

		int z;
		//ù��°���Һ���
		//���� ���Ұ� ���ĺ� �̶��(11���� �̻�)
		if (n[digit - i - 1] >=65 ) {
			z = n[digit - i - 1] - 55;
			
		}
		
		else {
			//���ĺ��� �ƴ϶��
			z = n[digit - i - 1]-48;
		}
		sum = sum + mul * z;

	}
	printf("%d", sum);



	return 0;
}