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
//	/*배열을 정렬하는 것은 쉽다.수가 주어지면, 그 수의 각 자리수를 내림차순으로 정렬해보자.
//
//		입력
//		첫째 줄에 정렬하려고 하는 수 N이 주어진다.N은 1, 000, 000, 000보다 작거나 같은 자연수이다.
//
//		출력
//		첫째 줄에 자리수를 내림차순으로 정렬한 수를 출력한다.*/
//		//2143 -> 4321
//
//	int number;
//	cin >> number;
//
//	//1.각 자릿수를 배열에 인덱스에 저장-> 인덱스대로 출력
//	//시간 소요 예상
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
