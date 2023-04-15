#include <stdio.h>


int main(void) {
	int num; 
	printf("김환씨 정수를 입력하세요.\n");
	scanf_s("%d", &num);
	
	printf("김환씨 결과는 ");
	do {
		printf("%d", num % 10);  
		num = num / 10;          
	} while (num);

		printf("입니다.");
	}
	