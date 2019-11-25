//#include<stdio.h>
//#include<iostream>
//#include<string.h>
//using namespace std;
//int qx[1100000];
//int qy[1100000];
//int first, last;
//int qz[1001][1001]; // why  #so thao tac toi thieu de dat x,y
//int a, b, c;  // de bai
//int x, y, z;  // bien trung gian
//bool pop() {
//	if (first > last) {
//		return false;
//	}
//	x = qx[first];
//	y = qy[first];
//	z = qz[x][y] + 1;
//	first++;
//	return true;
//}
//int checkAndPush(int tx, int ty) {
//	if (tx == c || ty == c) {
//		cout << z << endl;
//		return z;
//	}
//	else {
//		if ((tx == 0 && ty == 0) || qz[tx][ty] > 0)return 0;
//		else {
//			last++;
//			qx[last] = tx;
//			qy[last] = ty;
//			qz[tx][ty] = z;
//			return 0;
//		}
//	}
//}
//void solveTestCase() {
//	cin >> a >> b >> c;
//	first = 0;
//	last = 0;
//	qx[last] = 0;
//	qy[last] = 0;
//	memset(qz, 0, sizeof(qz));
//	int t;
//	while (pop()) {
//		if (checkAndPush(0, y)) {
//			return;
//		}
//		if (checkAndPush(x, 0)) {
//			return;
//		}
//		if (checkAndPush(a, y))return;
//		if (checkAndPush(x, b))return;
//		t = x < (b - y) ? x : (b - y);
//		if (checkAndPush(x - t, y + t)) {
//			return;
//		}
//		t = y < (a - x) ? y : (a - x);
//		if (checkAndPush(x + t, y - t))return;
//	}
//	cout << -1 << endl;
//}
//
//int main() {
//	int T;
//	cin >> T;
//	for (int i = 0; i < T; i++)
//		solveTestCase();
//	return 0;
//}