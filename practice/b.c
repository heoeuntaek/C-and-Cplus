#include <stdio.h>


int main(void) {
	int num; 
	printf("��ȯ�� ������ �Է��ϼ���.\n");
	scanf_s("%d", &num);
	
	printf("��ȯ�� ����� ");
	do {
		printf("%d", num % 10);  
		num = num / 10;          
	} while (num);

		printf("�Դϴ�.");
	}
	