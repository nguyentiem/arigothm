//#include<iostream>
//#include<set>
//#include<map>
//#include<list>
//#include<queue>
//using namespace std;
//
//map<int, set<int>> M;
//int mark[100000];
//queue<int>Q;
//int n, m;
//int chia[100000];
//int tem = 0;
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
//int BFS() {
//
//	while (!Q.empty()) {
//		int i = Q.front();
//		Q.pop();
//		if (mark[i] == 0) {
//			mark[i] = 1;
//			//cout << i << " ";
//			set<int>::iterator at;
//			for (at = M[i].begin(); at != M[i].end(); at++) {
//				int a = *at;
//
//				if (mark[a] == 0) {
//					Q.push(a);
//					chia[a] = (chia[i] + 1) % 2;
//				}
//				else {
//					if (chia[a] == chia[i]) return 0;
//				}
//
//			}
//			//cout << endl;
//		}
//	}
//	return 1;
//}
//
//
//
//
//int main() {
//	input();
//	Q.push(1);
//	chia[1] = 0;
//	cout << BFS();
//	return 0;
//}