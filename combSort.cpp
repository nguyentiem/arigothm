//#include<iostream>
//using namespace std;
//float a[1000000];
//int n;
//void swap(float* a, float* b) {
//	float c = *a;
//	*a = *b;
//	*b = c;
//}
//
//int max(int a, int b) {
//	return a > b ? a : b;
//}
//
//void combSort(float a[], int n) {
//	int flag = 0;
//	int  g = n;
//	while (g != 1 || flag == 1) {
//		g = max((g / 1.3), 1);
//		flag = 0;
//		for (int i = 0; i < n - g; i++) {
//			if (a[i] > a[i + g]) {
//				swap(&a[i], &a[i + g]);
//				flag = 1;
//			}
//		}
//	}
//}
//
//int main() {
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		cin >> a[i];
//	}
//	combSort(a, n);
//	for (int i = 0; i < n; i++) {
//		printf("%.2f ", a[i]);
//	}
//	cout << endl;
//	return 0;
//}