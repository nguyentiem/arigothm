//#include<iostream>
//using namespace std;
//int a[10000], n, m;
//int b[10000];
//void input() {
//	cin >> n >> m;
//	for (int i = 0; i < m; i++) {
//		cin >> a[i];
//	}
//}
//int  ham() {
//	for (int i = m - 1; i >= 0; i--) {
//		if (a[i] < (n - (m - 1 - i))) {
//			a[i] += 1;
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
//		for (int i = 0; i < m; i++) {
//			cout << a[i] << " ";
//		}
//	}
//	else {
//		cout << "-1" << endl;
//	}
//}
