#pragma warning(disable:4996)
#include<iostream>

using namespace std;

//连通块中点的数量
//https://www.acwing.com/problem/content/839/

//const int N = 1e5 + 10;
//int n, m;
//int p[N], cnt[N];
//
////返回祖宗节点
//int find(int x)
//{
//	if (p[x] != x)p[x] = find(p[x]);
//	return p[x];
//}
//
//int main()
//{
//	scanf("%d%d", &n, &m);
//	//初始化
//	for (int i = 1; i <= n; i++)
//	{
//		p[i] = i;
//		cnt[i] = 1;
//	}
//
//	while (m--)
//	{
//		string op;
//		cin >> op;
//		if (op == "C")
//		{
//			int a, b;
//			scanf("%d%d", &a, &b);
//			if (find(a) != find(b))			//在一个连通块中就不需要合并了
//			{
//				cnt[find(a)] += cnt[find(b)];
//				p[find(b)] = find(a);
//			}
//		}
//		else if (op == "Q1")
//		{
//			int a, b;
//			scanf("%d%d", &a, &b);
//			if (find(a) == find(b))printf("Yes\n");
//			else printf("No\n");
//		}
//		else if (op == "Q2")
//		{
//			int a;
//			scanf("%d", &a);
//			printf("%d\n", cnt[find(a)]);
//		}
//	}
//	return 0;
//
//}




//堆排序
//https://www.acwing.com/problem/content/840/

//const int N = 1e5 + 10;
//int n, m, h[N], cnt;
//
//void down(int x)
//{
//	int t = x;
//	if (x * 2 <= cnt && h[2 * x] < h[t])t = 2 * x;
//	if (x * 2 + 1 <= cnt && h[2 * x + 1] < h[t])t = 2 * x + 1;
//	if (t != x)
//	{
//		swap(h[x], h[t]);
//		down(t);
//	}
//}
//
//int main()
//{
//	scanf("%d%d", &n, &m);
//	for (int i = 1; i <= n; i++)scanf("%d", &h[i]);
//
//	cnt = n;
//
//	for (int i = n / 2; i; i--)down(i);
//
//	while (m--)
//	{
//		printf("%d ", h[1]);
//		h[1] = h[cnt--];
//		down(1);
//	}
//
//	return 0;
//}


//模拟堆		
//https://www.acwing.com/problem/content/841/

//const int N = 1e5 + 10;
//int n;
//int h[N], cnt, ph[N], hp[N], idx = 0;		//idx插入的顺序，cnt下标
//
//void h_swap(int a, int b)
//{
//	swap(h[a], h[b]);
//	swap(ph[hp[a]], ph[hp[b]]);
//	swap(hp[a], hp[b]);
//}
//
//void down(int x)
//{
//	int t = x;
//	if (x * 2 <= cnt && h[x * 2] < h[t])t = 2 * x;
//	if (x * 2 + 1 <= cnt && h[2 * x + 1] < h[t])t = 2 * x + 1;
//	if (x != t)
//	{
//		h_swap(x, t);
//		down(t);	 	 	 
//	}
//}
//
//void up(int x)
//{
//	while (x / 2 && h[x] < h[x / 2])
//	{
//		h_swap(x, x / 2);
//		x /= 2;
//	}
//}
//
//int main()
//{
//	scanf("%d", &n);
//	while (n--)
//	{
//		string op;
//		int k, x;
//		cin >> op;
//		if (op == "I")
//		{
//			scanf("%d", &x);
//			cnt++, idx++;
//			ph[idx] = cnt, hp[cnt] = idx;		//ph下标映射到次数，hp次数映射到下标
//			h[cnt] = x;
//			up(cnt);
//		}
//		else if (op == "D")
//		{
//			scanf("%d", &k);
//			k = ph[k];
//			h_swap(k, cnt);
//			cnt--;
//			up(k);
//			down(k);
//		}
//		else if (op == "C")
//		{
//			scanf("%d%d", &k, &x);
//			k = ph[k];
//			h[k] = x;
//			up(k);
//			down(k);
//		}
//		else if (op == "PM")
//		{
//			printf("%d\n", h[1]);
//		}
//		else
//		{
//			h_swap(1, cnt);
//			cnt--;
//			down(1);
//		}
//	}
//
//	return 0;
//}
