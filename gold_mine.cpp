//#include<iostream>
//using namespace std;
//
//int a[100000];
//int c, b;
//int n;
//int s[100000];
//int maxt = 0;
//void input() {
//	cin >> n >> b >> c;
//	for (int i = 0; i < n; i++) {
//		cin >> a[i];
//	}
//}
//int  tinh() {
//	for (int i = 0; i < b; i++) {
//		s[i] = a[i];
//		if (maxt < s[i])maxt = s[i];
//	}
//	for (int i = b; i < n; i++) {
//		int tem = 0;
//		for (int j = b; j <= c; j++) {
//			if (i - j < 0)break;
//			if (tem < s[i - j])tem = s[i - j];
//		}
//		s[i] = a[i] + tem;
//		if (maxt < s[i])maxt = s[i];
//	}
//	return maxt;
//}
//int main() {
//	input();
//	cout << tinh();
//	return 0;
//}