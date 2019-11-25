//#include<iostream>
//#include<set>
//#include<map>
//#include<list>
//using namespace std;
////list <int >l; 
////set<int> s; 
//map<int, set<int>> M;
//int mark[100000];
//int n, m;
//void input() {
//	cin >> n;
//	cin >> m;
//	//for (int i = 1; i <= n; i++) {
//	//	/*int a; 
//	//	cin >> a;*/
//	//	l.push_back(i);
//	//}
//	for (int i = 1; i <= m; i++) {
//		int a, b;
//		cin >> a >> b;
//
//		M[a].insert(b);
//		M[b].insert(a);
//	}
//	//list<int> ::iterator it; 
////	for (it = l.begin(); it != l.end(); it++) {
////	    for(int i =1; i<=n;i++)
////{		//int a = *it;
////		set<int>::iterator at; 
////		for (at = m[i].begin(); at != m[i].end(); at++) {
////			cout << i << "-> " << *at << endl;
////		}
////	}
//}
//
//int dem = 0;
//
//void dfs_one(int u) {
//	if (mark[u] == 0) {
//		mark[u] = 1;
//		set<int>::iterator at;
//		for (at = M[u].begin(); at != M[u].end(); at++) {
//			//cout << a << "-> " << *at << endl;
//			int a = *at;
//			dfs_one(a);
//		}
//	}
//}
//void dfs() {
//	for (int i = 1; i <= n; i++) {
//		if (mark[i] == 0) {
//			dem += 1;
//			dfs_one(i);
//		}
//	}
//}
//
//int main() {
//	input();
//	dfs();
//	cout << dem << endl;
//
//	return 0;
//}