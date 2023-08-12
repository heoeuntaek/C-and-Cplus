#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;



int comp(pair<int,int> a, pair<int,int> b) {
	if (a.first == b.first) return a.second < b.second;
	return a.first < b.first;
}
int main()
{

	vector<pair<int, int>>v;
	int count;
	cin >> count;
	int a, b;
	for (int i = 0; i < count; i++) {
		
		cin >> a >> b;
		v.push_back(pair<int, int>(a, b));
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < count; i++) {
		cout << v[i].first <<" "<< v[i].second<< endl;;
	}

	
}


