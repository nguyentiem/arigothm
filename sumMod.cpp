//#include<iostream>
//using namespace std;
//#define x 1000000007
//long modadd(long a, long b) {         // chia doi so mu va thuc hien de quy co nho  
//	a = a % x;
//	b = b % x;
//	int tem1 = x - a;
//	if (tem1 > b) return a + b;
//	return b - tem1;
//}
//
//
//int main() {
//	long  n, tem;
//	cin >> n;
//	long re;
//	for (int i = 1; i <= n; i++) {
//		if (i == 1) {
//			cin >> tem;
//			re = modadd(tem, 0);
//		}
//		else {
//			cin >> tem;
//			re = modadd(re, tem);
//		}
//	}
//
//	cout << re << endl;;
//	return 0;
//
//}