#include <iostream>
#include <vector>
#include <algorithm> 
#include <string>
#include <numeric>
#include<cmath>
#include <sstream>
#include <tuple>

using namespace std;



//bool compare(string a, string b) { // compare �Լ�
//	if (a.size() == b.size()) { // ó���� ���ٸ�
//		return a < b;
//	} // �������� ������������
//	return a.size() < b.size(); // x ��ǥ�� ���� �ʴٸ� x ��ǥ�� ������������
//
//}

bool compare(tuple <int, string, int> a, tuple <int, string, int> b) { // compare �Լ�
	if (get<0>(a) == get<0>(b)) { // x ��ǥ�� ���ٸ�
			return get<2>(a) < get<2>(b);
	}

	return get<0>(a) < get<0>(b); // x ��ǥ�� ���� �ʴٸ� x ��ǥ�� ������������
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


