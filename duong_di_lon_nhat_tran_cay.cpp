//
///////////////////////////// duyet theo mot chieu tim u dai nhat 
//////////////////////////// duyet tu u theo chieu nguoc lai  se tim duoc chieu dai lon nhat 
//#include<stdio.h>
//#include<iostream>
//#include<set>
//#include<map>
//#include<list>
//using namespace std;
//typedef struct diem {
//	int ke; 
//	int phi; 
//};
//// map<int, set<int>> M;
//map<int, set<diem*> > M;
//int n;
//void input() {
//	cin >> n;
//
//	
//	for (int i = 1; i <n; i++) {
//		int a, b,c;
//		cin >> a >> b>>c;
//		diem* p = new diem;
//		p->ke = b;
//		p->phi = c;
//
//
//		M[a].insert(p);
//		diem* q = new diem;
//		q->ke = a;
//		q->phi = c;
//		M[a].insert(p);
//		M[b].insert(q);
//	}
//}
//int mark1[100000];
//int s1 = 0; 
//int max1 = 0;
//int index = 1; 
//void  ham(int u) {
//	
//		set<diem*>::iterator at;
//		for (at = M[u].begin(); at != M[u].end(); at++) {
//			diem* a = *at; 
//			if (mark1[a->ke] == 0) {
//				mark1[a->ke] = 1;
//				s1 += a->phi;
//				if (s1 >= max1) {
//					max1 = s1;
//					index = a->ke; 
//					
//				}
//				//cout << a->ke <<" "<<s1<< endl;
//				ham(a->ke);
//				mark1[a->ke] = 0;
//				s1 -= a->phi;
//			}
//			
//		}
//}
//
//int main() {
//	input();
//	
//	mark1[1] = 1;
//	ham(1);
//	s1 = 0; 
//	max1 = 0; 
//	for (int i = 0; i <= n; i++) {
//		mark1[i] = 0;
//	}
//	mark1[index] = 1;
//	ham(index);
//	cout << max1 << endl;
//
//	return 0;
//}