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
////bool compare(pair <int, int> p, pair <int, int> p2) { // compare �Լ�
////	if (p.second == p2.second) { // x ��ǥ�� ���ٸ�
////		return p.first < p2.first; // y ��ǥ�� ������������
////	}
////
////	return p.second < p2.second; // x ��ǥ�� ���� �ʴٸ� x ��ǥ�� ������������
////}
//
//bool compare(string a, string b) { // compare �Լ�
//	if (a.size() == b.size()) { // ó���� ���ٸ�
//		return a < b;
//	} // �������� ������������
//	return a.size() < b.size(); // x ��ǥ�� ���� �ʴٸ� x ��ǥ�� ������������
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
