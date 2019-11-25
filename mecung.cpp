//#include<stdio.h>
//#include<iostream>
//#include<string.h>
//using namespace std;
//int in[1000][1000];
//int qx[1000000];
//int qy[1000000];
//int first, last;
//int qz[1000][1000]; // why  #so thao tac toi thieu de dat x,y
//int m, n, k, e;
//int x, y, z;  // bien trung gian 
//
//bool pop() { // lay ra x, y
//	if (first > last) {
//		return false;
//	}
//	x = qx[first];
//	y = qy[first];
//	z = qz[x][y] + 1;
//	first++;
//	return true;
//}
//
//int min(int a, int b) {
//	return a < b ? a : b;
//}
//int max(int a, int b) {
//	return a > b ? a : b;
//}
//int checkandpush(int tx, int ty) {
//	if ((tx == 0 || ty == 0 || tx == m - 1 || ty == n - 1) && in[tx][ty] == 0) {
//		cout << z + 1 << endl;
//		return z + 1;
//	}
//	else {
//		if (in[tx][ty] == 1)return 0;
//		else {
//
//			last++;
//			qx[last] = tx;
//			qy[last] = ty;
//			qz[tx][ty] = z;
//			in[tx][ty] = 1;
//			return 0;
//		}
//	}
//}
//void solvetestcase() {
//	cin >> m >> n >> k >> e;
//	first = 0;
//	last = 0;
//	qx[last] = k - 1;
//	qy[last] = e - 1;
//
//	memset(qz, 0, sizeof(qz));
//	for (int i = 0; i < m; i++) {
//		for (int j = 0; j < n; j++) {
//			cin >> in[i][j];
//		}
//	}
//	in[k - 1][e - 1] = 1;
//
//	while (pop()) {
//
//		if (checkandpush(max(x - 1, 0), y)) {
//			return;
//		}
//
//		if (checkandpush(x, max(y - 1, 0))) {
//			return;
//		}
//		if (checkandpush(x, min(y + 1, n))) {
//			return;
//		}
//
//		if (checkandpush(min(x + 1, m), y)) {
//			return;
//		}
//
//	}
//	cout << -1 << endl;
//
//}
//
//int main() {
//	solvetestcase();
//	return 0;
//}