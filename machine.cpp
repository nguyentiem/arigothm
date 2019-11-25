//#include<iostream>
//using namespace std;
//#define LENGH 1000000
//int t[1000000], s[1000000], lt[1000000], ls[1000000];
//int n;
//int max(int a, int b) {
//	return a > b ? a : b;
//}
//void input() {
//
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		cin >> s[i] >> t[i];
//		ls[s[i]] = max(ls[s[i]], t[i] - s[i]); // lon nhat o dau
//		lt[t[i]] = max(lt[t[i]], t[i] - s[i]);// lon nhat o cuoi
//	}
//}
//int  ham() {
//	for (int i = 1; i < LENGH; i++) {
//		lt[i] = max(lt[i], lt[i - 1]);
//	}
//	for (int i = LENGH - 2; i >= 0; i--) {
//		ls[i] = max(ls[i], ls[i + 1]);
//	}
//	int mm = 0;
//	for (int i = 0; i < LENGH - 1; i++) {
//		if (mm < lt[i] + ls[i + 1]) {
//			mm = lt[i] + ls[i + 1];
//		}
//	}
//	return mm;
//}
//int main() {
//	ios::sync_with_stdio(false);
//	input();
//
//	cout << ham();
//	return 0;
//}