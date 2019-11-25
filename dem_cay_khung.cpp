//#include<iostream>
//#include<set>
//#include<map>
//#include<list>
//using namespace std;
////list <int >l; 
////set<int> s;  
//map<int, set<int>> M;
//int danh[100000];
//int mark[100000];
//int n, m;
//void input() {
//	cin >> n;
//	cin >> m;
//	
//	for (int i = 1; i <= m; i++) {
//		int a, b;
//		cin >> a >> b;
//		danh[a]++;
//		danh[b]++;
//		M[a].insert(b);
//		M[b].insert(a);
//	}
//
//}
//
//int dem = 0;
//int tem = 1; 
//int re[10000];
//void ham(int u) {
//	mark[u] = 1; 
//	re[tem] = u;
//		set<int>::iterator at;
//		for (at = M[u].begin(); at != M[u].end(); at++) {
//			
//			int a = *at;
//			
//			if (mark[a] == 0) {
//				
//				mark[a] = 1;
//				tem += 1;
//				if (tem == n) {
//					re[n] = a; 
//					dem += 1;
//				//	cout << dem << " :";
//					//for (int i = 1; i <= n; i++) cout << re[i] << "-> ";
//					//cout << endl; 
//				}
//				else
//                   ham(a);
//				
//				
//				mark[a] = 0; 
//				tem -= 1;
//			}
//		}
//	
//}
//
//
//int main() {
//	input();
//	for (int i = 1; i <= n; i++) {
//		memset(mark, 0, 100000);
//		//dem = 0; 
//		tem = 1;
//
//		ham(i);
//
//	}
//	dem /= 2;
//	for (int i = 1; i <= n; i++) {
//		if (danh[i] >= 3) {
//			dem += 1;
//		}
//	}
//	cout << dem << endl;
//
//	return 0;
//}