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
//bool sorting(pair <int, int> p, pair <int, int> p2) { // compare 함수
//	if (p.second == p2.second) { // x 좌표가 같다면
//		return p.first < p2.first; // y 좌표를 오름차순으로
//	}
//
//	return p.second < p2.second; // x 좌표가 같지 않다면 x 좌표를 오름차순으로
//}
//
//int main()
//{
//	vector<pair<int, int>>v;
//	int count;
//	cin >> count;
//
//	for (int i = 0; i < count; i++) {
//		int a, b;
//		cin >> a >> b;
//		v.push_back(pair<int, int>(a, b));
//	}
//	sort(v.begin(), v.end(), sorting);
//	for (int i = 0; i < count; i++) {
//		cout << v[i].first << " " << v[i].second << "\n";
//	}
//
//
//}
//
//
