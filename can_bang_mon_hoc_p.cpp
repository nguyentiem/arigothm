//#include<iostream>
//using namespace std;
//int m, n;
//int hc[16];  // thoi luong tung khoa hoc 
//int conflict[16][16]; // ma tran xung dot
//int tong[5];
//int course[16];
//void input() {
//
//	cin >> n >> m;
//	for (int i = 0; i < n; i++) {
//		cin >> hc[i];
//	}
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			cin >> conflict[i][j];
//
//		}
//	}
//}
//
//int check(int k, int v) {
//	for (int i = 0; i < n; i++) {
//		if (conflict[k][i] == 1 && course[i] > v) {
//			return 0;
//		}
//	}
//	return 1;
//}
//
//int mint = 99999;
//int xep(int k, int n, int m) {
//	for (int i = m - 1; i >= 0; i--) {
//		if (check(k, i)) {
//			course[k] = i;
//			tong[i] += hc[k];
//			if (k == n - 1) {
//				int tem = 0;
//				for (int j = 0; j < m; j++) {
//					if (tem < tong[j]) {
//						tem = tong[j];
//					}
//				}
//				if (tem < mint)mint = tem;
//			}
//			else {
//				if (tong[course[k]] < mint)
//					xep(k + 1, n, m);
//			}
//			tong[i] -= hc[k];
//		}
//	}
//	return mint;
//}
//int main() {
//	input();
//	cout << xep(0, n, m) << endl;;
//}