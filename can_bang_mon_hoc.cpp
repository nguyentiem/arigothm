//#include<iostream>
//using namespace std;
//
//int hc[20];  // thoi luong tung khoa hoc 
//int conflict[20][20]; // ma tran xung dot
//
//
//int mGV[20][5]; // mon i duoc gia vien k day
//int n, m;
//int tong[5];
//
//int teacher[5]; // giao vien
//int course[20]; // khoa hoc
//
//void input() {
//	//memset(hc, 0, 20);
//	//memset(conflict, 0, 400);
//	////memset(mark, 0, 20);
//	//memset(mGV, 0, 100);
//	//memset(tong, 0, 5);
//	cin >> n >> m;
//	for (int i = 0; i < n; i++) {
//		cin >> hc[i];
//	}
//	for (int i = 0; i < n; i++) {
//		int tem;
//
//		cin >> tem;
//		for (int j = 0; j < tem; j++) {
//			int tem1;
//			cin >> tem1;
//			mGV[i][tem1] = 1;
//		}
//	}
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			cin >> conflict[i][j];
//		}
//	}
//}
//int check(int k, int v) {
//	if (mGV[k, v] == 0) { // phai day duoc 
//		return 0;
//	}
//	else {
//		for (int i = 0; i < k; i++) { // khong trung voi mon khac
//			if (conflict[k][i] == 1) {
//				if (course[i] == v)return 0;
//			}
//			else {
//				continue;
//			}
//		}
//		return 1;
//	}
//}
//int mint = 9999;
//int xep(int k, int n, int m) {
//	for (int i = 0; i < m; i++) {
//		if (check(k, i)) {
//			course[k] = i;
//			tong[i] += hc[k];
//			if (k == n) {
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