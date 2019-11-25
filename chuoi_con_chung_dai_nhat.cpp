//#include<iostream>
//using namespace std;
//int n, m;
//int a[10000], b[10000];
//int s[10000][10000];
//void input() {
//	cin >> n >> m;
//	for (int i = 0; i < n; i++) cin >> a[i];
//	for (int i = 0; i < m; i++) cin >> b[i];
//}
//int maxT(int a, int b) {
//	return a > b ? a : b;
//}
//int ham() {
//	int tem = 0;
//	for (int i = 0; i < n; i++) {
//		if (a[i] == b[0]) {
//			tem = 1;
//		}
//		s[i][0] = tem;
//	}
//	tem = 0;
//	for (int i = 0; i < m; i++) {
//		if (b[i] == a[0]) {
//			tem = 1;
//		}
//		s[0][i] = tem;
//	}
//	for (int i = 1; i < n; i++) {
//		for (int j = 1; j < m; j++) {
//			if (a[i] == b[j])s[i][j] = s[i - 1][j - 1] + 1;
//			else {
//				s[i][j] = maxT(s[i - 1][j], s[i][j - 1]);
//			}
//
//		}
//	}
//
//	return s[n - 1][m - 1];
//}
//
//int main() {
//	input();
//	cout << ham();
//	return 0;
//}