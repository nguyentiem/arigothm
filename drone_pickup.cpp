//#include<iostream>
//using namespace std;
//int a[3000], c[3000];
//int n, k;
//int F[3000][100];
//void input() {
//	cin >> n >> k;
//
//
//	for (int i = 0; i < n; i++)cin >> c[i];
//	//for (int i = 0; i < n; i++) cout << c[i]<<" ";
//	//cout << endl;
//	for (int i = 0; i < n; i++)cin >> a[i];
//	//for (int i = 0; i < n; i++) cout << a[i] << " ";
//	//cout << endl;
//	for (int i = 0; i < n; i++)
//		for (int j = 0; j <= k; j++) {
//			F[i][j] = -1;
//		}
//}
//int  ham() {
//	F[0][0] = c[0];
//	//cout << F[0][0] << endl;;
//	for (int i = 1; i < n; i++) {
//		for (int j = 1; j <= k; j++)
//		{
//			int maxt = 0;
//			for (int u = i - 50; u < i; u++) {
//				if (F[u][j - 1] >= 0 && u + a[u] >= i) {
//					if (maxt < F[u][j - 1] + c[i]) maxt = F[u][j - 1] + c[i];
//					//cout << maxt << endl;
//				}
//			}
//			F[i][j] = maxt;
//		}
//	}
//	int mm = 0;
//	for (int i = 0; i <= k; i++) {
//		if (mm < F[n - 1][i])mm = F[n - 1][i];
//	}
//	//for (int i = 1; i < n; i++) {
//	//	for (int j = 1; j <= k; j++)
//	//	{
//	//		cout << F[i][j]<<" ";
//	//	}
//	//	cout << endl;
//	//}
//	return mm;
//}
//int main() {
//	input();
//	cout << ham();
//	return 0;
//}