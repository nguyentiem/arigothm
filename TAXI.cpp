//#include<iostream>
//using namespace std;
//#define max 100
//int Q = 1;
//int a[max][max];
//int markL[max];
//int dd[max];
//int smin = 9999;
//int tmin = 9999;
//long tem = 0;
//int load = 0;
//
//int input() {
//	int n;
//	cin >> n;
//	for (int i = 0; i <= 2 * n; i++) {
//		for (int j = 0; j <= 2 * n; j++) {
//			cin >> a[i][j];
//			if (tmin > a[i][j] && a[i][j] != 0)tmin = a[i][j];
//		}
//	}
//	return n;
//}
//
//int check(int k, int n) {
//	if (k <= n && load + 1 <= Q && markL[k] == 0) {
//		load++;
//		return 1;
//	}
//	else {
//		if (markL[k - n] == 1 && markL[k] == 0) {
//			load--;
//			return 1;
//		}
//	}
//	return 0;
//}
//
//int duyet(int k, int n) {
//	for (int i = 1; i <= 2 * n; i++) {
//		if (check(i, n)) {
//			markL[i] = 1;
//			dd[k] = i;
//			tem += a[dd[k - 1]][i];
//			if (k == 2 * n) {
//				if (smin > tem + a[dd[k]][0]) {
//					smin = tem + a[dd[k]][0];
//				}
//			}
//			else {
//				if (tem + (2 * n - k + 1) * tmin < smin)
//					duyet(k + 1, n);
//			}
//			markL[i] = 0;
//			tem -= a[dd[k - 1]][i];
//			if (i <= n)load--;
//			else load++;
//		}
//	}
//	return smin;
//}
//int main() {
//	int n = input();
//	dd[0] = 0;
//	cout << duyet(1, n) << endl;
//}