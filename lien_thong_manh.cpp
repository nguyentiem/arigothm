////#include<bits/stdc++.h>
//#include<vector>
//#include<iostream>
//using namespace std;
//
//const int nmax = (int)1e5 + 10;
//
//int n, m;
//vector<int> g[nmax], h[nmax];
//int f[nmax], s[nmax], d[nmax];
//int F = 0;
//int res = 0;
//
//void qs(int l, int r) {
//	if (l >= r) {
//		return;
//	}
//
//	int i = l, j = r, x = f[(i + j) / 2];
//	do {
//		while (f[i] > x) i++;
//		while (f[j] < x) j--;
//		if (i <= j) {
//			int t;
//			t = f[i];
//			f[i] = f[j];
//			f[j] = t;
//			t = s[i];
//			s[i] = s[j];
//			s[j] = t;
//			i++;
//			j--;
//		}
//	} while (i <= j);
//
//	qs(l, j);
//	qs(i, r);
//}
//
//void dfs(int v) {
//	if (f[v] != 0) {
//		return;
//	}
//
//	f[v] = 1;
//
//	for (vector<int>::iterator i = g[v].begin(); i != g[v].end(); i++) {
//		dfs(*i);
//	}
//
//	F++;
//	f[v] = F;
//	d[v] = F;
//}
//
//void scc(int v) {
//	if (d[v] < 0) {
//		return;
//	}
//
//	d[v] = -d[v];
//
//	for (vector<int>::iterator i = h[v].begin(); i != h[v].end(); i++) {
//		scc(*i);
//	}
//}
//
//int main() {
//	int t1, t2;
//
//	ios::sync_with_stdio(false);
//
//	cin >> n >> m;
//
//	for (int i = 0; i < m; i++) {
//		cin >> t1 >> t2;
//		g[t1].push_back(t2);
//		h[t2].push_back(t1);
//	}
//
//	memset(f, 0, sizeof(f));
//	for (int i = 1; i <= n; i++) {
//		s[i] = i;
//		dfs(i);
//	}
//
//	qs(1, n);
//
//	for (int i = 1; i <= n; i++) {
//		if (d[s[i]] > 0) {
//			scc(s[i]);
//			res++;
//		}
//	}
//
//	cout << res << endl;
//
//	return 0;
//}
