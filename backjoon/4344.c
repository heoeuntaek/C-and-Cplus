//#include <stdio.h>
//#include <stdlib.h> //srand, rand�� ����ϱ� ���� �������
//#include <time.h> // time�� ����ϱ� ���� �������
//
//int main() {
//
//	int number;
//	int numberOfStudent;
//	int arrOfScore[1000] = { 0, };
//
//	scanf("%d", &number);
//	for (int i = 0; i < number; i++) {
//		scanf("%d", &numberOfStudent);
//		for (int i = 0; i < numberOfStudent; i++) {
//			scanf("%d", &arrOfScore[i]);
//		}
//		
//		int sumOfScore = 0;
//		for (int i = 0; i < numberOfStudent; i++) {
//			sumOfScore += arrOfScore[i];
//		}
//		int average= sumOfScore/numberOfStudent; 
//		int countOfUpScore = 0;
//		for (int i = 0; i < numberOfStudent; i++) {
//			if (average < arrOfScore[i]) {
//				countOfUpScore++;
//			}
//		}
//		float answer = (float)countOfUpScore / (float)numberOfStudent;
//		printf("%.3f%%\n",answer*100);
//
//		
//	}
//
//
//	return 0;
//
//
//}