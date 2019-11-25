//#include<iostream>
//using namespace std;
//int n;
//int a[1000000];
//void input() {
//	cin >> n;
//	for (int i = 0; i < n; i++) cin >> a[i];
//}
//int ham() {
//	int maxt;
//	int s = a[0];
//	maxt = s;
//	for (int i = 1; i < n; i++) {
//		if (s >= 0)s += a[i];
//		else {
//			if (a[i] > s)
//				s = a[i];
//		}
//		if (maxt < s)maxt = s;
//	}
//	return maxt;
//}
//int main() {
//	input();
//	cout << ham();
//}