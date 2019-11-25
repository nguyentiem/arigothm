//#include<iostream>
//using namespace std;
//void swap(int* a, int* b) {
//	int c = *a;
//	*a = *b;
//	*b = c;
//}
//int ser(int L, int R, int a[], int  pivot) {
//
//	if (L <= R) {
//		int tem = a[pivot];
//
//		int j = L;
//		swap(&a[pivot], &a[R]);
//		for (int i = L; i < R; i++) {
//			if (a[i] < tem) {
//				swap(&a[i], &a[j]);
//				j++;
//			}
//
//		}
//		swap(&a[j], &a[R]);
//		return j;
//	}
//	return -1;
//}
//void xep(int L, int R, int a[]) {
//	if (L <= R) {
//		int B = ser(L, R, a, L);
//		xep(L, B - 1, a);
//		xep(B + 1, R, a);
//	}
//
//}
//int a[1000000];
//int main() {
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		cin >> a[i];
//
//	}
//	xep(0, n - 1, a);
//	for (int i = 0; i < n; i++) {
//		cout << a[i] << " ";
//	}
//	cout << endl;
//	return 0;
//}