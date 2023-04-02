#include <stdio.h>
#include <string.h>

int main() {
	char n[100];  //수
	int b;  //진법
	int sum = 0;
	//int mul = 3;
	//int f = 3;
	//for (int j = 0; j < 2; j++) {
	//	mul = mul * f;
	//}
	//printf("%d\n", mul);

	/*printf("여기 : %d\n", 'Z'-87);
	printf("여기2:  %d\n", '1');*/

	scanf("%s %d", &n, &b);
	// 2~10진법일떄도


	
	int digit = strlen(n);
	for (int i = digit - 1; i >= 0; i--) {
		//b의 제곱
		//b 의 i승
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
		//첫번째원소부터
		//만약 원소가 알파벳 이라면(11진수 이상)
		if (n[digit - i - 1] >=65 ) {
			z = n[digit - i - 1] - 55;
			
		}
		
		else {
			//알파벳이 아니라면
			z = n[digit - i - 1]-48;
		}
		sum = sum + mul * z;

	}
	printf("%d", sum);



	return 0;
}