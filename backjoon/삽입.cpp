//#include <iostream>
//#include <vector>
//#include <algorithm> 
//#include <string>
//#include <numeric>
//#include<cmath>
//#include <sstream>
//#include <ctime>
//
//using namespace std;
//
//
//int main()
//{
//	int number;
//	cin >> number;
//	int y;
//	vector<int>v;
//	for (int i = 0; i < number; i++) {
//		int a;
//		cin >> a;
//		v.push_back(a);
//	}
//	//삽입정렬
//	int tmp;
//	for (int x = 1; x < v.size(); x++) {
//		tmp = v[x];  //임시변수
//		for (y = x - 1; y >= 0; y--) {  //비교당할 수 
//			if (tmp < v[y]) {
//				v[y + 1] = v[y];
//			}
//			else break;
//		}
//		v[y + 1] = tmp;
//	}
//
//
//	for (auto i : v) {
//		cout << i << " ";
//
//	}
//
//	return 0;
//}