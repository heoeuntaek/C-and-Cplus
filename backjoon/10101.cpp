#include <iostream>
#include <vector>
#include <algorithm> 
#include<string>

using namespace std;

int main()
{
	//�� ���� ũ�Ⱑ ��� 60�̸�, Equilateral
	//	�� ���� ���� 180�̰�, �� ���� ���� ��쿡�� Isosceles
	//	�� ���� ���� 180�̰�, ���� ���� ���� ��쿡�� Scalene
	//	�� ���� ���� 180�� �ƴ� ��쿡�� Error

	int a, b, c;
	cin >> a >> b >> c;
	if (a == 60 && b == 60 && c == 60) {
		cout << "Equilateral";
	}
	else if (a + b + c == 180) {
		if ((a == b && a == c) || (a == c && b == c)) {
			cout << "Isosceles";
		}  
		 
		else {
			cout << "Scalene";
		}


	}
	else if (a + b + c != 180) {
		cout << "Error";

	}
	else {

	}

	return 0;
}
