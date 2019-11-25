////#include<stdio.h>
//#include<iostream>
//#include<string.h>
//using namespace std;
//int a[10000];
//int result[10000];
//
//int  tim(int n) {
//
//
//
//
//	for (int i = n - 1; i > 0; i--) {
//		if (a[i] > a[i - 1]) {
//			int index = 0;
//			for (int j = n - 1; j >= i; j--) {
//				if (a[j] > a[i - 1]) {
//					index = j;
//					break;
//				}
//			}
//			int tem = a[index];
//			a[index] = a[i - 1];
//			a[i - 1] = tem;
//			for (int j = n - 1; j > (n - 1 + i) / 2; j--) {
//				int	tem = a[j];
//				a[j] = a[n - 1 - j + i];
//				a[n - 1 - j + i] = tem;
//			}
//			return 1;
//		}
//	}
//	return 0;
//}
//int main() {
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		cin >> a[i];
//	}
//	int re = tim(n);
//	if (re) {
//		for (int i = 0; i < n; i++) {
//			cout << a[i] << " ";
//		}
//		cout << endl;
//	}
//	else {
//		cout << "-1" << endl;
//	}
//	return 0;
//}