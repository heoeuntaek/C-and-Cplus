//#include <iostream>
//#include <vector>
//#include <algorithm> 
//#include <string>
//#include <numeric>
//#include<cmath>
//#include <sstream>
//
//using namespace std;
//
////bool compare(pair <int, int> p, pair <int, int> p2) { // compare 함수
////	if (p.second == p2.second) { // x 좌표가 같다면
////		return p.first < p2.first; // y 좌표를 오름차순으로
////	}
////
////	return p.second < p2.second; // x 좌표가 같지 않다면 x 좌표를 오름차순으로
////}
//
//bool compare(string a, string b) { // compare 함수
//	if (a.size() == b.size()) { // 처음게 같다면
//		return a < b;
//	} // 다음것을 오름차순으로
//	return a.size() < b.size(); // x 좌표가 같지 않다면 x 좌표를 오름차순으로
//
//}
//
//int main()
//{
//	int count;
//	cin >> count;
//	vector<string> v;
//	for (int i = 0; i < count; i++) {
//		string a;
//		cin >> a;
//		v.push_back(a);
//	}
//
//
//
//	sort(v.begin(), v.end(), compare);
//	v.erase(unique(v.begin(), v.end()), v.end());
//
//	for (int i = 0; i < v.size(); i++) {
//		cout << v[i] << "\n";
//	}
//
//
//}
//
//
