#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<string.h>

main() {
	srand(time(NULL));
	
	int num = rand() % 3+1;
	//∞°¿ß 1 πŸ¿ß2 ∫∏3 
	int a; 
	printf("∞°¿ß : 1\nπŸ¿ß : 2\n∫∏ : 3\n");
	scanf("%d", &a);
	switch (a)
	{
	case 1:
		if (num == 1) printf("∫Ò∞Â¿Ω");
		else if (num == 2) printf("¿Ã±Ë");
		else printf("¡¸");
	case 2:
		if (num == 1) printf("¡¸");
		else if (num == 2) printf("∫Ò±Ë");
		else printf("¿Ã±Ë");

	case 3:
		if (num == 1) printf("¿Ã±Ë");
		else if (num == 2) printf("¡¸");
		else printf("∫Ò±Ë");


	default:

		break;
	}
	printf("\n");
	switch (num)
	{
	case 1: printf("∞°¿ß"); 
		break;
	case 2: printf("πŸ¿ß");
		break;
	case 3: printf("∫∏");
		break;
	default:
		break;
	}
	
	


}



