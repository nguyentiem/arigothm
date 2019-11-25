//#include<iostream>
//using namespace std;
//int a[1000000];
//int main() {
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		cin >> a[i];
//	}
//
//	int max = -999999;
//	int s = max;
//	for (int i = 0; i < n; i++) {
//
//		if (s >= 0) {
//			s += a[i];
//		}
//		else {
//			s = a[i];
//		}
//		if (s > max) max = s;
//	}
//	cout << max << endl;
//}