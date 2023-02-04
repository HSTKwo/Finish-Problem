#pragma warning(disable:4996)
#include<iostream>
#include<algorithm>

using namespace std;

//双链表
//https://www.acwing.com/problem/content/829/

//const int N = 100;
//int m;
//int e[N], l[N], r[N], idx, head, tail;
//
//void init()
//{
//	idx = 1;
//	tail = N - 1;
//	head = 0;
//	r[head] = tail;
//	l[tail] = head;
//}
//
//void insert(int k, int x)//左
//{
//	e[idx] = x, r[idx] = k, l[idx] = l[k], r[l[k]] = idx, l[k] = idx++;
//}
//
//void erase(int k)
//{
//	r[l[k]] = r[k];
//	l[r[k]] = l[k];
//}
//
//int main()
//{
//	scanf("%d", &m);
//	init();
//	while (m--)
//	{
//		string str;
//		int k, x;
//		cin >> str;
//		if (str == "L")
//		{
//			scanf("%d", &x);
//			insert(r[head], x);
//		}
//		if (str == "R")
//		{
//			scanf("%d", &x);
//			insert(tail, x);
//		}
//		if (str == "D")
//		{
//			scanf("%d", &k);
//			erase(k);
//		}	
//		if (str == "IL")
//		{
//			scanf("%d%d", &k, &x);
//			insert(k, x);
//		}
//		if (str == "IR")
//		{
//			scanf("%d%d", &k, &x);
//			insert(r[k], x);
//		}
//	}
//	 
//	for (int i = r[head]; i != tail; i = r[i])printf("%d ", e[i]);
//
//	return 0;
//}




//模拟栈
//https://www.acwing.com/problem/content/830/

//const int N = 1e5 + 10;
//int m;
//int q[N], tt = 0;
//
//int main()
//{
//	scanf("%d", &m);
//
//	while (m--)
//	{
//		string op;
//		int x;
//		cin >> op;
//		if (op == "push")
//		{
//			scanf("%d", &x);
//			q[++tt] = x;
//		}
//		if (op == "pop")
//		{
//			tt--;
//		}
//		if (op == "empty")
//		{
//			if (tt>0)printf("NO\n");
//			else printf("YES\n");
//
//		}
//		if (op == "query")
//		{
//			printf("%d\n", q[tt]);
//		}
//	}
//	return 0;
//}



//模拟队列
//https://www.acwing.com/problem/content/831/

//const int N = 1e5 + 10;
//int q[N], head = 0, tail = -1;
//int m;
//
//int main()
//{
//	scanf("%d", &m);
//	while (m--)
//	{
//		int x;
//		string op;
//		cin >> op;
//		if (op == "push")
//		{
//			scanf("%d", &x);
//			q[++tail] = x;
//		}
//		if (op == "pop")
//		{
//			++head;
//		}
//		if (op == "empty")
//		{
//			if (head > tail)printf("YES\n");
//			else printf("NO\n");
//		
//		}
//		if (op == "query")
//		{
//			printf("%d\n", q[head]);
//		}
//	}
//	return 0;
//}




//单调栈
//https://www.acwing.com/problem/content/832/

//const int N = 1e5 + 10;
//int n, stk[N], tt = 0;
//
//int main()
//{
//	scanf("%d", &n);
//
//	for (int i = 0; i < n; i++)
//	{
//		int x; scanf("%d", &x);
//		while (tt && stk[tt] >= x)tt--;
//		if (tt)printf("%d ", stk[tt]);
//		else printf("-1 ");
//		stk[++tt] = x;
//	}
//	return 0;
//}



//滑动窗口
//https://www.acwing.com/problem/content/156/

//const int N = 1e6 + 10;
//int q[N], a[N], hh = 0, tt = -1;
//int n, k;
//
//int main()
//{
//	scanf("%d%d", &n, &k);
//
//	for (int i = 0; i < n; i++)scanf("%d", &a[i]);
//
//	for (int i = 0; i < n; i++)
//	{
//		if (hh <= tt && i - k + 1 > q[hh])hh++;		//判断队头是否滑出窗口
//		while (hh <= tt && a[q[tt]] >= a[i])tt--;	//若队尾的元素比a[i]大,一定不会输出，删除	
//		q[++tt] = i;
//		if (i >= k - 1)printf("%d ", a[q[hh]]);
//	}
//	printf("\n");
//	hh = 0, tt = -1;
//	for (int i = 0; i < n; i++)
//	{
//		if (hh <= tt && i - k + 1 > q[hh])hh++;
//		while (hh <= tt && a[q[tt]] <= a[i])tt--;
//		q[++tt] = i;
//		if (i >= k - 1)printf("%d ", a[q[hh]]);
//	}
//
//	return 0;
//}



//KMP字符串
//https://www.acwing.com/problem/content/833/

//const int N = 1e5 + 10, M = 1e6 + 10;
//char s[M], p[N];
//int n, m,ne[N];
//
//
//int main()
//{
//	cin >> n >> p + 1 >> m >> s + 1;
//	//求next数组
//	for (int i = 2, j = 0; i <= n; i++)
//	{
//		while (j && p[i] != p[j + 1])j = ne[j];
//		if (p[i] == p[j + 1])j++;
//		ne[i] = j;
//	}
//
//	//匹配过程
//	for (int i = 1, j = 0; i <= m; i++)
//	{
//		while (j && p[j + 1] != s[i])j = ne[j];
//		if (s[i] == p[j + 1])j++;
//		if (j == n)
//		{
//			printf("%d ", i - n);
//			j = ne[j];
//		}
//	}
//	return 0;
//}