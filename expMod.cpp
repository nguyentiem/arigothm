//#include<iostream>
//using namespace std;
//#define x 1000000007
//
//
//int modAdd(int a, int b) {
//	a = a % x;
//	b = b % x;
//	int tem1 = x - a;
//	if (tem1 > b) return a + b;
//	return b - tem1;
//}
//int modNhan(int a, int b) {
//	if (a == 1)  return b % x;
//	if (b == 1) return a % x;
//	if (a > b) {
//		int tem = a; a = b; b = tem;
//	}
//	int c = modNhan(a / 2, b);
//	c = modAdd(c, c);
//	if (a % 2 == 0) return c;
//	else {
//		return modAdd(c, b);
//	}
//
//	/*if (b == 2) return modAdd(a, a);
//	int c = b / 2;
//	if (b % 2 == 0) {
//		int tem = modNhan(a, c);
//		return modAdd(tem ,tem);
//	}
//	else {
//		int tem = modNhan(a, c);
//		int tem1 = modAdd(tem, tem);
//		return modAdd(tem1, a);
//	}*/
//}
//int modMu(int a, int b) {
//
//	if (b == 1) return a % x;
//	/*if (b == 2) return modNhan(a, a);
//	int c = b / 2;
//	int tem = modMu(a, c);
//	if (b % 2 == 0) {
//		return modNhan(tem, tem);
//	}
//	else {
//		int tem1 = modNhan(tem, tem);
//		return modNhan(a, tem1);
//	}*/
//	int t = modMu(a, b / 2);
//	t = modNhan(t, t);
//	if (b % 2 == 0)return t;
//	else {
//		return modNhan(t, a);
//	}
//}
//int main() {
//	long  a, b;
//	cin >> a;
//	cin >> b;
//	cout << modMu(a, b) << endl;
//	return 0;
//
//}