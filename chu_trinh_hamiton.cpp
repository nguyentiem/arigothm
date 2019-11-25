//#include<iostream>
//#include<set>
//#include<map>
//#include<list>
//using namespace std;
//
//map<int, set<int>> M;
//int mark[100000];
//int a[100000];
//int n, m;
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
//int dem = 0;
// 
//int check(int x, int y) {
//	set<int>::iterator at;
//	for (at = M[x].begin(); at != M[x].end(); at++) {
//		int a = *at;
//		if (a == y) return 1;
//		
//	}
//	return 0;
//}
//void ham(int u ,int k) {
//	if (mark[u] == 0) {
//		mark[u] = 1;
//		a[k] = u;
//		if (k == n) {
//			if (check(u, 1)) {
//				for (int i = 1; i < n; i++) {
//					cout << a[i] << " ";
//				}
//				cout << endl;
//			}
//		}
//		else {
//			set<int>::iterator at;
//			for (at = M[u].begin(); at != M[u].end(); at++) {
//		         
//				int a = *at;
//				if(mark[a]==0)
//				ham(a, k + 1);
//			}
//		}
//		mark[u] = 0;
//	}
//
//}
//
//
//int main() {
//	input();
//	
//	ham(1, 1);
//
//	return 0;
//}