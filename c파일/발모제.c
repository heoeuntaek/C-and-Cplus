//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<time.h>
//#include<stdlib.h>
//#include<string.h>
//
//main() {
//	srand(time(NULL));
//	int b = rand() % 4;
//	
//	int a[4] = {0};
//	int f = 0;
//	int sw = 1;
//	
//	int an;
//	
//	while (1) {
//		
//		
//		switch (sw)
//		{
//		case 1:
//			for (int i = 1; i <=3; i++)
//			{
//				printf("발모제를 골라주세요\n",i);
//				a[i] = rand() % 4+1; 
//				printf("%d\n", a[i]);
//				if (a[i] == b+1) {
//					f = 1;
//				}
//			}
//			if (f==1) printf("발모제가 이 안에 있습니다\n");
//			else if (f == 0)printf("발모제가 없습니다.\n");
//			break;
//		case 2:
//			printf("정답을 맞춰주세요\n");
//			scanf("%d", &an);
//			an;
//			if (b == an-1) { printf("%d은 정답입니다!", an); 
//			exit(0); }
//
//		default:
//			printf("땡!");
//			break;
//		}
//		printf("계속 하시겠습니까 ? \n1:계속 \n2:정답 맞히기\n");
//		f = 0;
//		scanf("%d", &sw);
//	}
//		
//	}
//
//
//	
//
//
//
//
