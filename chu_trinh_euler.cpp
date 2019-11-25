//#include<iostream>
//#include<set>
//#include<stack>
//#include<map>
//#include<list>
//#include<queue>
//using namespace std;
//
//map<int, set<int>> M;
//int n, m;
//
//
//void input() {
//	cin >> n;
//	cin >> m;
//
//	for (int i = 1; i <= m; i++) {
//		int a, b;
//		cin >> a >> b;
//
//		M[a].insert(b);
//		M[b].insert(a);
//	}
//
//}
//
//void euler(int a) {
//	stack <int> S;
//	stack <int> E;
//	S.push(a); 
//	while (!S.empty()) {
//
//		int x = S.top(); 
//		if (!M[x].empty()) {
//			int y = *M[x].begin();
//			S.push(y); 
//			M[x].erase(y);
//			M[y].erase(x);
//		}
//		else {
//			S.pop();
//			E.push(x);
//		}
//
//	}
//	while (!E.empty()) {
//		int a = E.top();
//			E.pop();
//		cout << a << "->";
//  }
//
//}
//
//
//
//int main() {
//	input();
//	euler(1);
//	return 0;
//}