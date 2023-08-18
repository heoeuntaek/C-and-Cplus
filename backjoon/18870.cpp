#include <iostream>
#include <vector>
#include <algorithm> 
#include <string>
#include <numeric>
#include<cmath>
#include <sstream>
#include <tuple>

using namespace std;

bool compare2(tuple <int, int, int> a, tuple <int, int, int> b) { // compare 함수
	return get<2>(a) < get<2>(b);
}


bool compare(tuple <int, int, int> a, tuple <int, int, int> b) { // compare 함수
	return get<0>(a) < get<0>(b);
}

int main()
{
	vector<tuple<int, int, int>>v;
	int count;
	cin >> count;
	for (int i = 0; i < count; i++) {
		int a;
		cin >> a;
		v.push_back({ a, 0, i });
	}
	//sort(v.begin(), v.end(), compare);
	sort(v.begin(), v.end());
	int number = 0;
	
	for (auto i = 0; i < count;  i++) {
		if (i != 0) {
			if (get<0>(v[i]) != get<0>(v[i - 1])) {
				number++;
			}
		}
		
		get<1>(v[i]) = number;
		//v.emplace	(it, get<0>(v[i]), number, get<2>(v[i]));
	}
	sort(v.begin(), v.end(),compare2);
	for (int i = 0; i < count; i++) {
		cout << get<1>(v[i]) << " ";
	}




}


