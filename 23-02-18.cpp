#pragma warning(disable:4996)
#include<iostream>
#include<queue>
#include<unordered_map>

using namespace std; 

//树的重心
//https://www.acwing.com/problem/content/848/

//const int N = 1e5 + 10, M = N * 2;
//int n;
//int h[N], e[M], ne[M], idx;
//bool st[N];
//int ans = N;
//
//int dfs(int u)
//{
//	int res = 0;		//存储删除u后最大值
//	int sum = 1;		//存储以u为根的树
//	st[u] = true;
//
//	for (int i = h[u]; i != -1; i = ne[i])
//	{
//		int j = e[i];
//		if (!st[j])
//		{
//			int s = dfs(j);		//s为删除u后子代的树
//			res = max(s, res);
//			sum += s;
//		}
//	
//	}
//	res = max(res, n - sum);
//	ans = min(res, ans);
//	return sum;
//}
//
//void add(int a,int b)
//{
//	e[idx] = b, ne[idx] = h[a], h[a] = idx++;
//}
//
//int main()
//{
//	scanf("%d", &n);
//	memset(h, -1, sizeof h);
//	for (int i = 0; i < n - 1; i++)
//	{
//		int a, b;
//		scanf("%d%d", &a, &b);
//		add(a, b), add(b, a);
//	}
//	dfs(1);
//	printf("%d", ans);
//	return 0;
//}



//图中点的层次
//https://www.acwing.com/problem/content/849/

//const int N = 1e5 + 10;
//int n, m;
//int h[N], e[N], ne[N], idx;
//int q[N], hh, tt, d[N];
//bool st[N];
//int cnt = 0;
//int bfs()
//{
//	memset(d, -1, sizeof d);
//	d[1] = 0, q[0] = 1;
//
//	while (hh <= tt)
//	{
//		int t = q[hh++];
//		for (int i = h[t]; i != -1; i = ne[i])
//		{
//			int j = e[i];
//			if (d[j] == -1)
//			{
//				d[j] = d[t] + 1;
//				q[++tt] = j;
//			}
//		}
//	}
//	return d[n];
//}
//
//void add(int a, int b)
//{
//	e[idx] = b, ne[idx] = h[a], h[a] = idx++;
//}
//
//int main()
//{
//	scanf("%d%d", &n, &m);
//	memset(h, -1, sizeof h);
//	while (m--)
//	{
//		int a, b;
//		scanf("%d%d", &a, &b);
//		add(a, b);
//	}
//
//	cout << bfs() << endl;
//
//	return 0;
//}



//八皇后 Checker Challenge
//https://www.luogu.com.cn/problem/P1219

//const int N = 15, M = 2 * N;
//int n;
//bool col[N], dg[M], udg[M];
//int path[N];
//int cnt;
//
//void dfs(int u)
//{
//	if (u == n)
//	{
//		cnt++;
//		if (cnt < 4)
//		{
//			for (int i = 0; i < n; i++)
//			{
//				printf("%d ", path[i]);
//			}
//			printf("\n");
//		}
//		return;
//	}
//
//	for (int i = 1; i <= n; i++)
//	{
//		if (!col[i] && !dg[u + i] && !udg[i - u + n])
//		{
//			col[i] = dg[u + i] = udg[i - u + n] = true;
//			path[u] = i;
//			dfs(u + 1);
//			col[i] = dg[u + i] = udg[i - u + n] = false;
//			path[u] = 0;
//		}
//	}
//}
//
//int main()
//{
//	scanf("%d", &n);
//
//	dfs(0);
//
//	printf("%d", cnt);
//	return 0;
//}


//有向图的拓扑序列
//https://www.acwing.com/problem/content/850/

//const int N = 1e5 + 10;
//int n, m;
//int h[N], e[N], ne[N], idx;
//int q[N], hh, tt, d[N];
//
//void add(int a, int b)
//{
//	e[idx] = b, ne[idx] = h[a], h[a] = idx++;
//}
//
//bool topsort()
//{
//	hh = 0, tt = -1;
//	//找到入度为0的节点
//	for (int i = 1; i <= n; i++)
//	{
//		if (d[i] == 0)
//		{
//			q[++tt] = i;
//		}
//	}
//
//	while (hh <= tt)
//	{
//		int t = q[hh++];
//
//		for (int i = h[t]; i != -1; i = ne[i])
//		{
//			int j = e[i];
//			d[j]--;
//			if (d[j] == 0)
//			{
//				q[++tt] = j;
//			}
//		}
//	}
//	return tt == n - 1;
//}
//
//int main()
//{
//	scanf("%d%d", &n, &m);
//	memset(h, -1, sizeof h);
//
//	while (m--)
//	{
//		int a, b;
//		scanf("%d%d", &a, &b);
//		add(a, b);
//		d[b]++;
//	}
//
//	if (topsort())
//		for (int i = 0; i < n; i++)printf("%d ", q[i]);
//	else
//		printf("-1");
//
//	return 0;
//}



//八数码
//https://www.acwing.com/problem/content/847/

const int N = 1e5 + 10;
char g[3][3];
queue<string>q;
unordered_map <string, int>d;

int bfs(string s)
{
	string end = "12345678x";
	q.push(s);
	d[s] = 0;
	int dx[] = { -1,0,1,0 }, dy[] = { 0,1,0,-1 };
	while (q.size())
	{
		auto t = q.front();
		q.pop();
		if (t == end)return d[t];
		int dist = d[t];

		int k = t.find('x');
		int x = k / 3, y = k % 3;
		for (int i = 0; i < 4; i++)
		{
			int a = x + dx[i], b = y + dy[i];
			if (a < 3 && y < 3 && a >= 0 && b >= 0)
			{
				swap(t[k], t[a * 3 + b]);
				if (!d.count(t))
				{
					d[t] = dist + 1;
					q.push(t);
				}
				swap(t[k], t[a * 3 + b]);
			}
		}
	}
	return -1;
}


int main()
{
	string c, start;

	for (int i = 0; i < 9; i++)
	{
		cin >> c;
		start += c;
	}

	cout << bfs(start) << endl;

	return 0;
}