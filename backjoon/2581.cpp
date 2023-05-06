//#include <iostream>
//#include <vector>
//#include <algorithm> 
//
//using namespace std;
//
//int main()
//{
//	//자연수 M과 N이 주어질 때
//	//	1. M이상 N이하의 자연수 중 소수인 것을 모두 골라
//
//
//	//	출력 : 합
//	//	최솟값
//
//	int maxNum, minNumber;
//	cin >> minNumber >> maxNum;
//
//	vector<int> v;
//	
//	for (int i = minNumber; i <= maxNum; i++) {
//		
//		int number = i;
//		int cnt = 0;
//		for (int i = 1; i <= number; i++) {
//			if (number % i == 0) {
//				cnt++;
//			}
//		}
//		if (cnt == 2) { //소수라면
//			v.push_back(number);
//		}
//	}
//	int sum = 0;
//	for (int i = 0; i < v.size(); i++) {
//		sum += v.at(i);
//	}
//	int min;
//	
//
//	if (v.size() == 0) {
//		cout << -1;
//	}
//	else {
//		min = *min_element(v.begin(), v.end());
//		cout << sum << endl<<min<<endl;
//
//	}
//	
//
//
//	return 0;
//}
