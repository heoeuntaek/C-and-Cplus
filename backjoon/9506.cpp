//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main()
//{
//	while (1) {
//		int a;
//		cin >> a;
//		if (a == -1)break;
//		vector<int> v;
//		for (int i = 1; i < a + 1; i++) {
//			if (a % i == 0) {
//				v.push_back(i);
//			}
//		}
//		int sum = 0;
//		for (int i = 0; i < v.size() - 1; i++) {
//			sum += v[i];
//		}
//		if (sum == a) {
//			cout << a << " = ";
//			for (int i = 0; i < v.size()-1; i++) {
//				if (i == (v.size() - 2)) {
//					cout << v[i];
//				}
//				else {
//					cout << v[i] << " + ";
//				}
//
//			}
//			cout << endl;
//		}
//		else {
//			cout << a << " is NOT perfect.";
//			cout << endl;
//
//		}
//		
//	}
//	//for (auto loop : vec) {
//	//	cout << loop;
//	//}
//	return 0;
//}