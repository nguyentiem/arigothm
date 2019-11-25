//#include<iostream>
//using namespace std;
//int a[10000], n;
//char b[10000];
//void input() {
//	cin >> n;
//	cin >> b;
//	for (int i = 0; i < n; i++) {
//		if (b[i] == '1') a[i] = 1;
//		else {
//			a[i] = 0;
//		}
//	}
//}
//int  ham() {
//
//	for (int i = n - 1; i >= 0; i--) {
//		if (a[i] == 1) {
//			a[i] = 0;
//		}
//		else {
//			a[i] = 1;
//			return 1;
//		}
//	}
//	return 0;
//}
//int main() {
//	input();
//	int tem = ham();
//	if (tem) {
//
//		for (int i = 0; i < n; i++) {
//			cout << a[i];
//		}
//	}
//	else {
//		cout << "-1" << endl;
//	}
//}
