//#include <stack>
//#include <stdio.h>
//#include<string.h>
//#include<iostream>
//using namespace std;
//int match(char a, char b) {
//	if (a == '(' && b == ')') return 1;
//	if (a == '{' && b == '}') return 1;
//	if (a == '[' && b == ']') return 1;
//	return 0;
//}
//int solve(char* x, int n) {
//	stack<char> s;
//	for (int i = 0; i <= n - 1; i++) {
//		if (x[i] == '[' || x[i] == '(' || x[i] == '{') {
//			s.push(x[i]);
//		}
//		else {
//			if (s.empty()) {
//				return 0;
//			}
//			else {
//				char c = s.top();
//				s.pop();
//				if (!match(c, x[i])) {
//					return 0;
//				}
//			}
//		}
//	}
//	if (s.empty()) {
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//
//}
//char a[1000000];
//int main() {
//	int n;
//	cin >> n;
//	for (int i = 1; i <= n; i++) {
//
//		memset(a, 0, 1000000);
//		cin >> a;
//		cout << solve(a, strlen(a)) << endl;
//	}
//	return 0;
//}