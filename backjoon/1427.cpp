//#include <iostream>
//#include <vector>
//#include <algorithm> 
//#include <string>
//#include <numeric>
//#include<cmath>
//#include <sstream>
//using namespace std;
//
//int main()
//{
//	/*�迭�� �����ϴ� ���� ����.���� �־�����, �� ���� �� �ڸ����� ������������ �����غ���.
//
//		�Է�
//		ù° �ٿ� �����Ϸ��� �ϴ� �� N�� �־�����.N�� 1, 000, 000, 000���� �۰ų� ���� �ڿ����̴�.
//
//		���
//		ù° �ٿ� �ڸ����� ������������ ������ ���� ����Ѵ�.*/
//		//2143 -> 4321
//
//	int number;
//	cin >> number;
//
//	//1.�� �ڸ����� �迭�� �ε����� ����-> �ε������ ���
//	//�ð� �ҿ� ����
//
//	vector<int>v;
//	while (number > 0) {
//		v.push_back(number % 10);
//		number = number / 10;
//	}
//
//	sort(v.begin(), v.end(), greater<>());
//
//	
//	string str;
//	for (int i = 0; i < v.size(); i++) {
//		str += to_string(v[i]);
//	}
//
//	cout << str;
//
//}
//
//
