//
//#include<iostream>
//using namespace std;
//int n;
//int a[1000000];
//int s[1000000];
//void input() {
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		cin >> a[i];
//	}
//}
//int ham() {
//	s[0] = 1;
//	for (int i = 1; i < n; i++) {
//		int max = 1;
//		for (int j = 0; j < i; j++) {
//			if (a[j] < a[i]) {
//				max = (s[j] + 1) > max ? (s[j] + 1) : max;
//			}
//		}
//		s[i] = max;
//	}
//	int tem = 1;
//	for (int i = 1; i < n; i++) {
//		if (s[i] > tem) tem = s[i];
//	}
//	return tem;
//}
//int main() {
//	input();
//	cout << ham();
//	return 0;
//
//}