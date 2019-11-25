//#include<iostream>
//using namespace std;
//int  b[1000][1000];
//char a[1001][1001];
//int kl[1000];
//int m, n;
//int min(int a, int b) {
//	return a > b ? b : a;
//}
//int max(int a, int b) {
//	return a > b ? a : b;
//}
//int loang(int x, int y) {
//	int dem = 1;
//	b[x][y] = 0;
//	if (b[max(0, x - 1)][y])dem += loang(max(0, x - 1), y);
//	if (b[min(x + 1, n)][y])dem += loang(min(x + 1, n), y);
//	if (b[x][max(0, y - 1)])dem += loang(x, max(0, y - 1));
//	if (b[x][min(y + 1, m)])dem += loang(x, min(y + 1, m));
//
//	return dem;
//}
//void input() {
//	//memset(a, 0, 100000);
//	cin >> n >> m;
//	for (int i = 0; i < n; i++) {
//		cin >> a[i];
//	}
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			if (a[i][j] == '0')b[i][j] = 0;
//			if (a[i][j] == '1')b[i][j] = 1;
//		}
//	}
//
//}
//int main() {
//	input();
//	int dem = 0;
//	int maxt = 0;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			if (b[i][j] == 1) {
//				dem += 1;
//				int tem = loang(i, j);
//				if (tem > maxt) maxt = tem;
//			}
//
//		}
//	}
//	cout << dem << "\n" << maxt;
//}