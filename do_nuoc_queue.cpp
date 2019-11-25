//#include <stdio.h>
//#include<iostream>
//#include <stdlib.h>
//#include <queue>
//
//#include <stack>
//#include <list>
//using namespace std;
//struct state {
//	int x;
//	int y;
//	state* p;
//};
//
//bool visited[10000][10000];
//queue<state*> q; // them vao hang doi dde duyet tiep 
//list<state*> l;  // 
//state* target;
//
//
//void initvisited() {
//	for (int x = 0; x < 10000; x++)
//		for (int y = 0; y < 10000; y++) visited[x][y] = false;
//}
//
//bool reachtarget(state* s, int c) {
//	return s->x == c || s->y == c;
//}
//void markvisit(state* s) {
//	visited[s->x][s->y] = true;
//}
//void freememory() {
//	list<state*>::iterator it;
//	for (it = l.begin(); it != l.end(); it++) {
//		delete* it;
//	}
//
//}
//
//bool genmove1out(state* s, int a, int b, int c) {
//	if (visited[0][s->y]) return false;
//	state* news = new state;
//	news->x = 0;
//	news->y = s->y;
//	news->p = s;
//	q.push(news);
//	markvisit(news);
//	l.push_back(news);
//	if (reachtarget(news, c)) {
//		target = news;
//		return true;
//	}
//	return false;
//}
//
//bool genmove2out(state* s, int a, int b, int c) {
//	if (visited[s->x][0]) return false;
//	state* news = new state;
//	news->x = s->x;
//	news->y = 0;
//	//news->msg = "do het nuoc o coc 2 ra ngoai";
//	news->p = s;
//	q.push(news); markvisit(news);
//	l.push_back(news);
//	if (reachtarget(news, c)) {
//		target = news;
//		return true;
//	}
//	return false;
//}
//
//bool genmove1full2(state* s, int a, int b, int c) {
//	if (s->x + s->y < b) return false;
//	if (visited[s->x + s->y - b][b]) return false;
//	state* news = new state;
//	news->x = s->x + s->y - b;
//	news->y = b;
//	//news->msg = "do nuoc tu coc 1 vao day coc 2";
//	news->p = s;
//	q.push(news); markvisit(news);
//	l.push_back(news);
//	if (reachtarget(news, c)) {
//		target = news;
//		return true;
//	}
//	return false;
//}
//
//bool genmove2full1(state* s, int a, int b, int c) {
//	if (s->x + s->y < a) return false;
//	if (visited[a][s->x + s->y - a]) return false;
//	state* news = new state;
//	news->x = a;
//	news->y = s->x + s->y - a;
//	news->p = s;
//	q.push(news); markvisit(news);
//	l.push_back(news);
//	if (reachtarget(news, c)) {
//		target = news;
//		return true;
//	}
//	return false;
//}
//
//bool genmoveall12(state* s, int a, int b, int c) {
//	if (s->x + s->y > b) return false;
//	if (visited[0][s->x + s->y]) return false;
//	state* news = new state;
//	news->x = 0;
//	news->y = s->x + s->y;
//
//	news->p = s;
//	q.push(news); markvisit(news);
//	l.push_back(news);
//	if (reachtarget(news, c)) {
//		target = news;
//		return true;
//	}
//	return false;
//}
//
//bool genmoveall21(state* s, int a, int b, int c) {
//	if (s->x + s->y > a) return false;
//	if (visited[s->x + s->y][0]) return false;
//	state* news = new state;
//	news->x = s->x + s->y;
//	news->y = 0;
//
//	news->p = s;
//	q.push(news); markvisit(news);
//	l.push_back(news);
//	if (reachtarget(news, c)) {
//		target = news;
//		return true;
//	}
//	return false;
//}
//
//bool genmovefill1(state* s, int a, int b, int c) {
//	if (visited[a][s->y]) return false;
//	state* news = new state;
//	news->x = a;
//	news->y = s->y;
//	news->p = s;
//	q.push(news); markvisit(news);
//	l.push_back(news);
//	if (reachtarget(news, c)) {
//		target = news;
//		return true;
//	}
//	return false;
//}
//
//bool genmovefill2(state* s, int a, int b, int c) {
//	if (visited[s->x][b]) return false;
//	state* news = new state;
//	news->x = s->x;
//	news->y = b;
//
//	news->p = s;
//	q.push(news); markvisit(news);
//	l.push_back(news);
//	if (reachtarget(news, c)) {
//		target = news;
//		return true;
//	}
//	return false;
//}
//
//int  print(state* target) {
//
//	if (target == NULL)return -1;
//	state* currents = target;
//	stack<state*> actions;
//	int a = 0;
//	while (currents != NULL) {
//		actions.push(currents);
//		a++;
//
//		currents = currents->p;
//	}
//	return a - 1;
//}
//
//void solve(int a, int b, int c) {
//	initvisited();
//	state* s = new state;
//	s->x = 0; s->y = 0; s->p = NULL;
//	q.push(s);
//	markvisit(s);
//	while (!q.empty()) {
//		state* s = q.front();
//		q.pop();
//		if (genmove1out(s, a, b, c)) break;
//		if (genmove2out(s, a, b, c)) break;
//		if (genmove1full2(s, a, b, c)) break;
//		if (genmoveall12(s, a, b, c)) break;
//		if (genmove2full1(s, a, b, c)) break;
//		if (genmoveall21(s, a, b, c)) break;
//		if (genmovefill1(s, a, b, c)) break;
//		if (genmovefill2(s, a, b, c)) break;
//	}
//}
//////////////////  x* 100000+y ///////////////////////
//int main() {
//	int a, b, c;
//
//
//	cin >> a >> b >> c;
//	target = NULL;
//	solve(a, b, c);
//	cout << print(target) << endl;
//	return 0;
//}