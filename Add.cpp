//#include<iostream>
//#include<string.h>
//using namespace std;
//int a[25];
//int b[25];
//int c[26];
//int d[25];
//int main()
//{
//	for (int i = 0; i < 25; i++) {
//		a[i] = 0;
//		b[i] = 0;
//		c[i] = 0;
//		d[i] = 0;
//	}
//	c[25] = 0;
//	char so1[25];
//	char so2[25];
//	cin >> so1;
//
//	cin >> so2;
//
//	strrev(so1);
//
//	strrev(so2);
//
//	int l1 = strlen(so1);
//
//	int l2 = strlen(so2);
//
//	for (int i = 0; i < l1; i++) {
//		a[i] = so1[i] - 48;
//
//	}
//
//
//	for (int i = 0; i < l2; i++) {
//		b[i] = so2[i] - 48;
//
//	}
//
//	for (int i = 0; i < 25; i++) {
//		int s = (a[i] + b[i] + c[i]);
//		d[i] = s % 10;
//		c[i + 1] = s / 10;
//	}
//	char re[25];
//	for (int i = 0; i < 25; i++) {
//		re[i] = 0;
//	}
//	int j = 0;
//	int i = 24;
//	while (i >= 0)
//	{
//		if (d[i] == 0) {
//			i--;
//		}
//		else {
//			break;
//		}
//	}
//	while (i >= 0) {
//
//		re[j] = d[i] + 48;
//		j++;
//		i--;
//
//	}
//	if (strcmp(re, "\0") == 0) {
//		cout << "0" << endl;
//	}
//	else {
//		cout << re << endl;
//	}
//	return 0;
//}