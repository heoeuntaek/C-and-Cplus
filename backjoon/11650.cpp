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
//class Point {
//public:
//	int x;
//	int y;
//
//	Point() {}
//	Point(int x, int y) {
//		this->x = x;
//		this->y = y;
//	}
//};
//int main()
//{
//	clock_t start, finish;
//	double duration;
//
//	start = clock();
//
//	/*���� �ð��� �����ϰ� ���� �ڵ�*/
//
//	
//
//
//	int number;
//	cin >> number;
//	vector<Point> v;
//	for (int i = 0; i < number; i++) {
//		int a, b;
//		cin >> a >> b;
//		Point* p = new Point;
//		p->x = a;
//		p->y = b;
//		v.push_back(*p);
//
//	}
//	cout << endl;
//	//���� - x�� ��  ���� x�� ���� -> y��
//
//
//	
//
//
//	for (int x = 0; x < v.size()-1; x++) {
//		for (int y = x+1; y < v.size(); y++) {
//			if (v[x].x > v[y].x) {
//				Point temp = v[y];
//				v[y] = v[x];
//				v[x] = temp;
//			}
//			else if (v[x].x == v[y].x) {
//				if (v[x].y > v[y].y) {
//					Point temp = v[y];
//					v[y] = v[x];
//					v[x] = temp;
//				}
//			}
//		}
//	}
//	for (int i = 0; i < number; i++) {
//		cout << v[i].x << " " << v[i].y << endl;
//	}
//
//
//	finish = clock();
//
//	duration = (double)(finish - start) / CLOCKS_PER_SEC;
//	cout << duration << "��" << endl;
//}
//
//
