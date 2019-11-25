//#include<iostream>
//using namespace std;
//int a[1000][1000];
//int  modAdd(int a, int b, int x) {
//	a = a % x;
//	b = b % x;
//	int tem1 = x - a;
//	if (tem1 > b) return a + b;
//	return b - tem1;
//}
//int ham(int k, int n, int m) {
//	if (k == 0 || k == n) {
//		a[k][n] = a[0][n] = 1 % m;
//
//		return a[0][n];
//	}
//	if (a[k][n] == 0)
//		a[k][n] = modAdd(ham(k - 1, n - 1, m), ham(k, n - 1, m), m);
//	return a[k][n];
//}
//int main() {
//
//	int n, k, m, t;
//	cin >> t;
//	for (int i = 1; i <= t; i++) {
//		cin >> n >> k >> m;
//		cout << ham(k, n, m) << endl;
//	}
//
//}