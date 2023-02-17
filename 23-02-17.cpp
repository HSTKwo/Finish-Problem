#pragma warning(disable:4996)
#include<iostream>
using namespace std;


//排列数字
//https://www.acwing.com/problem/content/844/
//
//const int N = 10;
//int n, d[N];
//bool st[N];
//
//void dfs(int u)
//{
//	if (u == n)
//	{
//		for (int i = 0; i < n; i++)printf("%d ", d[i]);
//		puts("");
//	}
//
//	for (int i = 1; i <= n; i++)
//	{
//		if (!st[i])
//		{
//			d[u] = i;
//			st[i] = true;
//			dfs(u + 1);
//			st[i] = false;		//回溯
//			d[u] = 0;
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
//	return 0;
//}



//n-皇后问题
//https://www.acwing.com/problem/content/845/

//方法1：每个格枚举
// 
//const int N = 10;
//int n;
//char g[N][N];
//bool row[N], col[N], dg[N], udg[N];
//
//void dfs(int x, int y, int s)
//{
//	if (s > n)return;
//	if (y == n)y = 0, x++;
//	if (x == n)
//	{
//		if (s == n)
//		{
//			for (int i = 0; i < n; i++)printf("%s\n", g[i]);
//			printf("\n");
//		}
//		return;
//	}
//
//	g[x][y] = '.';
//	dfs(x, y + 1, s);
//
//	if (!row[x] && !col[y] && !dg[x + y] && !udg[y - x + n])
//	{
//		row[x] = col[y] = dg[x + y] = udg[y - x + n] = true;
//		g[x][y] = 'Q';
//
//		dfs(x, y + 1, s + 1);
//
//		g[x][y] = '.';
//		row[x] = col[y] = dg[y + x] = udg[y - x + n] = false;
//	}
//}

//方法2：按行枚举（一行只有一个）

//const int N = 20;
//int n;
//char g[N][N];
//bool col[N], dg[N], udg[N];
//
//
//void dfs(int u)
//{
//	if (u == n)
//	{
//		for (int i = 0; i < n; i++)printf("%s\n", g[i]);
//		printf("\n");
//		return;
//	}
//	
//	//i为列
//	for (int i = 0; i < n; i++)
//	{
//		if (!col[i] && !dg[u + i] && !udg[i - u + n])
//		{
//			g[u][i] = 'Q';
//			col[i] = dg[i + u] = udg[i - u + n] = true;
//			dfs(u + 1);
//			col[i] = dg[i + u] = udg[i - u + n] = false;
//			g[u][i] = '.';
//		}
//	}
//}
//
//int main()
//{
//	scanf("%d", &n);
//	for (int i = 0; i <n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			g[i][j] = '.';
//		}
//	}
//
//	dfs(0);
//
//	return 0;
//}



//走迷宫
//https://www.acwing.com/problem/content/846/
//
//typedef pair<int, int> PII;
//const int N = 110;
//int n, m;
//int g[N][N], d[N][N];
//PII q[N * N];
//int hh, tt;
//
//int bfs(int x, int y)
//{
//	hh = 0, tt = 0;
//	q[0] = { 0,0 };
//	memset(d, -1, sizeof d);
//	d[0][0] = 0;
//	int dx[4] = { -1,0,1,0 }, dy[4] = { 0,1,0,-1 };
//
//	while (hh <= tt)
//	{
//		auto t = q[hh++];
//		for (int i = 0; i < 4; i++)
//		{
//			int x = t.first + dx[i], y = t.second + dy[i];
//			if (x >= 0 && x < n && y >= 0 && y < m && g[x][y] == 0 && d[x][y] == -1)
//			{
//				d[x][y] = d[t.first][t.second] + 1;
//				q[++tt] = { x,y };
//			}
//		}
//	}
//	return d[n - 1][m - 1];
//}
//
//int main()
//{
//	scanf("%d%d", &n, &m);
//	for (int i = 0; i < n; i++)
//		for (int j = 0; j < m; j++)
//			scanf("%d", &g[i][j]);
//
//	printf("%d", bfs(0, 0));
//
//	return 0;
//}
//
