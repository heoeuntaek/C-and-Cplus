//#include <iostream>
//#include <vector>
//#include <algorithm> 
//#include<string>
//#include <numeric>
//using namespace std;
//
//int main()
//{
//	//영선이는 길이가 a, b, c인 세 막대를 가지고 있고, 각 막대의 길이를 마음대로 줄일 수 있다.
//
//	//	영선이는 세 막대를 이용해서 아래 조건을 만족하는 삼각형을 만들려고 한다.
//
//	//	각 막대의 길이는 양의 정수이다
//	//	세 막대를 이용해서 넓이가 양수인 삼각형을 만들 수 있어야 한다.
//	//	삼각형의 둘레를 최대로 해야 한다.
//	
//	//	a, b, c가 주어졌을 때, 만들 수 있는 가장 큰 둘레를 구하는 프로그램을 작성하시오.
//	int a, b, c;
//	cin >> a >> b >> c;
//	vector<int>v = { a,b,c };
//	sort(v.begin(), v.end());
//	while (v[0] + v[1] <= v[2]) {
//		v[2]--;
//	}
//	
//	cout << accumulate(v.begin(),v.end(),0);
//	return 0;
//}
