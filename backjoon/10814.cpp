#include <iostream>
#include <vector>
#include <algorithm> 
#include <string>
#include <numeric>
#include<cmath>
#include <sstream>
#include <tuple>

using namespace std;



//bool compare(string a, string b) { // compare 함수
//	if (a.size() == b.size()) { // 처음게 같다면
//		return a < b;
//	} // 다음것을 오름차순으로
//	return a.size() < b.size(); // x 좌표가 같지 않다면 x 좌표를 오름차순으로
//
//}

bool compare(tuple <int, string, int> a, tuple <int, string, int> b) { // compare 함수
	if (get<0>(a) == get<0>(b)) { // x 좌표가 같다면
			return get<2>(a) < get<2>(b);
	}

	return get<0>(a) < get<0>(b); // x 좌표가 같지 않다면 x 좌표를 오름차순으로
}


int main()
{
	int count;
	cin >> count;
	vector<tuple<int, string, int>>v;

	for (int i = 0; i < count; i++) {
		int a;
		string b;
		cin >> a >> b;
		//v.push_back(make_tuple(a, b, i));
		v.push_back({ a, b, i });
	}

	sort(v.begin(), v.end(), compare);

	for (int i = 0; i < v.size();  i++) {
		cout << get<0>(v[i]) << " " << get<1>(v[i])<<"\n";
	}

}


