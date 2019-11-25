//#include<stdio.h>
//#include<iostream>
//#include<set>
//#include<map>
//#include<list>
//#include<vector>
//using namespace std;
//int d[1000000];
//int mark[1000000];
//int pr[1000000];
//int sort[1000000];
//set<int> nonfixed;
//int m, n, x, y;
//int s; 
//typedef struct diem {
//	int ke; 
//	int phi; 
//};
//
//map<int, set<diem*> > M;
///*int insert(int L,int R,int value) {
//	if (L == R) {
//		for (int i = s; i > L; i--) {
//			sort[i] = sort[i - 1];
//		}
//		sort[R] = value;
//		
//		return; 
//	}
//	if (R > L) {
//		int b = (L + R) / 2;
//
//		if (value > sort[b-1] && value < sort[b]) {
//			for (int i = s; i > b; i--) {
//				sort[i] = sort[i - 1];
//		 }
//			sort[b] = value;
//			
//			return; 
//		}
//		else {
//			if (value<sort[b]) {
//				insert(L, b,value);
//			}
//			else {
//				if (value > sort[b]) {
//					insert(b, R, value);
//				}
//			}
//		}
//	}
//}
//void insert_sort(int value) {
//	insert(0, s,value);
//}
//*/
//////////////////////////////////////
//vector <int >A[1000000];
//vector <int > c[1000000];
//int node[1000000];
//int idx[1000000];
//
//void input() {
//	cin >> n >> m; 
//
//}
//void swap(int i,int j) {
//	int tmp = idx[i]; idx[i] = idx[j]; idx[j] = tmp;
//	node[idx[i]] = i;
//	node[idx[j]] = j;
//
//}
//
//void upheap(int i) {
//	if (i==0) {
//		return;
//	}
//	while (i > 0) {
//		int pi = (i - 1) / 2;
//		if (d[node[i]] < d[node[pi]]) {
//			swap(i,pi);
//		}
//		else {
//			break;
//		}
//		i = pi;
//	}
//}
//
//void downheap(int i) {
//	int L=2*i+1 ;
//	int R = 2 * i + 2;
//	int mid = i; 
//
//	if (L <s&&d[node[L]]<d[node[mid]]) {
//		mid = L;
//	}
//	if (R < s && d[node[R]] < d[node[mid]]) {
//		mid = R;
//	}
//	if (mid != i) {
//		swap(i, mid);
//		downheap(mid);
//	}
//}
//
//void insert(int v ,int k) {
//	d[v] = k;
//	node[s] = v;
//	idx[node[s]] = s;
//	upheap(s);
//	s++;
//}
//int inHeap(int v) {
//	return idx[v] >= 0;
//}
//
//int deleteMin() {
//	int sel = node[0];
//	swap(0, s - 1);
//	s--;
//	downheap(0);
//	return sel;
//}
//
//
//void update(int v,int k) {
//	if (d[v] > k) {
//		d[v] = k;
//		upheap(idx[v]);
//	}
//	else {
//		d[v] = k;
//		downheap(idx[v]);
//	}
//}
//
//void solve( int t) {
//	s = 0; 
//	for (int v = 1; v <= n; v++) {
//		idx[v] = -1; 
//	}
//	d[s] = 0; 
//	for (int i = 0; i < A[s].size(); i++) {
//		int v = A[s][i];
//		insert(v, c[s][i]);
//	}
//	while (s > 0) {
//		int u = deleteMin();
//		for (int i = 0; i < A[u].size(); i++) {
//			int v = A[u][i];
//			if (!inHeap(v)) {
//				int w = d[u] + c[u][i];
//				insert(v, w);
//			}
//			else {
//				if (d[v] > d[u] + c[u][i])
//					update(v, d[u] + c[u][i]);
//			}
//		}
//	}
//	int rs = d[t]; 
//	cout << rs << endl;
//}
//
/////////////////////////////////////////
//void input() {
//	cin >> n >> m;
//	for (int i = 1; i <= m; i++) {
//		int a, b, c;
//		cin >> a >> b >> c;
//		diem* p = new diem;
//		p->ke = b;
//		p->phi = c;
//
//		M[a].insert(p);
//	
//	}
//	cin >> x >> y; 
//	 
//	for (int i = 1; i <= n; i++){
//		nonfixed.insert(i);
//		d[i] = -1;
//		pr[i] = i;
//     }
//	nonfixed.erase(x);
//	d[x] = 0;
//	pr[x] = x;
//	mark[x] = 1;
//	set<diem*>::iterator at;
//	for (at = M[x].begin(); at != M[x].end(); at++) {
//		diem* p = *at;
//		d[p->ke]=p->phi;
//		pr[p->ke] = x;
//	}
//}
//
//
//
//int ham() {
//	while (!nonfixed.empty()) {
//
//		int index = sort[0];
//		nonfixed.erase(index);
//
//		set<diem*>::iterator it;
//		for (it = M[index].begin(); it != M[index].end(); it++) {
//			diem* p = *it;
//			if (mark[p->ke] == 0) {
//				if (d[p->ke] == -1 || d[p->ke] > d[index] + p->phi) {
//
//					d[p->ke] = d[index] + p->phi;
//					pr[p->ke] = index;
//				}
//			}
//		}
//	}
//	return d[y];
//}
//
//int main() {
//	//input();
//	//cout << ham() << endl;
//	 solve(y);
//	return 0;
//}
//
