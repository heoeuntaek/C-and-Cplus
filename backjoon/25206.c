//#include <stdio.h>
//#include <stdlib.h> //srand, rand를 사용하기 위한 헤더파일
//#include <time.h> // time을 사용하기 위한 헤더파일
//
//float CalculMul(char grade[3]) {
//	float mul;
//	if (strcmp(grade, "A+") == 0) mul = 4.5;
//	else if (strcmp(grade, "A0") == 0) mul = 4.0;
//	else if (strcmp(grade, "B+") == 0) mul = 3.5;
//	else if (strcmp(grade, "B0") == 0) mul = 3.0;
//	else if (strcmp(grade, "C+") == 0) mul = 2.5;
//	else if (strcmp(grade, "C0") == 0) mul = 2.0;
//	else if (strcmp(grade, "D+") == 0) mul = 1.5;
//	else if (strcmp(grade, "D0") == 0) mul = 1.0;
//	else if (strcmp(grade, "F") == 0) mul = 0.0;
//	else if (strcmp(grade, "P") == 0) mul = -1;
//	return mul;
//}
//int main() {
//	int number;
//	float sumOfUp = 0;
//	float sumOfSub = 0;
//
//	for (int i = 0; i < 20; i++) {
//		char sub[50];
//		float SubjectCredit;
//		char grade[3];
//		scanf("%s %f %s", sub, &SubjectCredit, grade);
//		float mul = 1;
//		// 등급은 A+,A0,B+,B0,C+,C0,D+,D0,F,P중 하나이다.
//		mul = CalculMul(grade);
//		if (mul == -1) {
//			continue;
//		}
//		sumOfUp += mul * SubjectCredit;
//		sumOfSub += SubjectCredit;
//	}
//
//	float answer = sumOfUp / sumOfSub;
//	printf("%f", answer);
//	return 0;
//
//
//}