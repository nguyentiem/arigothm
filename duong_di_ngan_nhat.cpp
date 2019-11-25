//#include<iostream>
//using namespace std;
//#define max 100
//int a[16][16];
//int mark[500];
//int dd[16];
//int smin = 9999;
//int tmin = 9999;
//long tem = 0;
//void timMin(int k, int n) {
//	for (int i = 0; i <= n; i++) {
//		if (a[k][i] != 0 && a[k][i] < tmin) {
//			tmin = a[k][i];
//		}
//	}
//}
//int input() {
//
//	int n;
//	cin >> n;
//	for (int i = 0; i <= n; i++) {
//		for (int j = 0; j <= n; j++) {
//			cin >> a[i][j];
//
//		}
//	}
//	return n;
//}
//
//int duyet(int k, int n) {
//	for (int i = 1; i <= n; i++) {
//		if (mark[i] == 0 && a[dd[k - 1]][i] != 0) {
//			mark[i] = 1;
//			dd[k] = i;
//			tem += a[dd[k - 1]][i];
//			if (k == n) {
//				if (smin > tem + a[dd[k]][0]) {
//					smin = tem + a[dd[k]][0];
//				}
//			}
//			else {
//				timMin(k + 1, n);
//				if (tem + (n - k + 1) * tmin < smin)
//					duyet(k + 1, n);
//			}
//			mark[i] = 0;
//			tem -= a[dd[k - 1]][i];
//		}
//	}
//	return smin;
//}
//
/////////////////////////////////////////////////////////////////////////////
////int n;
////int c[max][max];
////int x[max];
////int ap[max]; //maxrk
////int f;//do dai quang duong tich luy
////int f_best;// luu do dai hanh trinh
////int x_best[max];// luu hanh trinh 
////
////int check(int v, int n) {
////	return !ap[v];
////}
////
////void solution() {
////	if (f + c[x[n]][0] < f_best) {
////		f_best = f + c[x[n]][0];
////
////	}
////	for (int i = 0; i <= n; i++) {
////		x_best[i] = x[i];
////	}
////}
////void Try(int k) {
////	for (int v = 1; v <= n; v++) {
////		if (check(v, n)) {
////			x[k] = v;
////			f += c[x[k - 1]][x[k]];
////			ap[v] = 1;
////			if (k == n) {
////				solution();
////			}
////			else {
////				Try(k + 1);
////			}
////		}
////		ap[v] = 0;
////		f-= c[x[k - 1]][x[k]];
////	}
////}
////
////void solve() {
////	f = 0; 
////	f_best = 100000;
////	for (int i = 1; i <= n; i++) {
////		ap[i] = 0;
////	}
////	x[0] = 0;
////	Try(1);
////	printf("%d", f_best);
////}
////////////////////////////////////////////////////////////////////////
//int main() {
//	int n = input();
//	dd[0] = 0;
//	cout << duyet(1, n) << endl;
//
//}