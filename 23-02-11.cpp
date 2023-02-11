#pragma warning(disable:4996)

#include<iostream>

using namespace std;



//【模板】线性筛素数
// https://www.luogu.com.cn/problem/P3383

//int n, q;
//const int N = 1e8 + 10;
//bool st[N];
//int primes[N], cnt=0;
//
//
//void get_prime(int n)
//{
//    for (int i = 2; i <= n ; i++)
//    {
//        if (!st[i])primes[cnt++] = i;
//        for (int j = 0; primes[j] <= n / i; j++)
//        {
//            st[primes[j] * i] = true;
//            if (i % primes[j] == 0)break;
//        }
//    }
//}
//
//int main()
//{
//    scanf("%d%d", &n, &q);
//    get_prime(n);
//    while (q--)
//    {
//        int x;
//        scanf("%d", &x);
//        printf("%d\n", primes[x-1]);
//    }
//
//    return 0;
//}


//取石子
//https://www.luogu.com.cn/problem/P4702

//const int N = 110;
//int n, a[N], s[N];
//
//int main()
//{
//	scanf("%d", &n);
//	for(int i=1;i<=n;i++)
//	{
//		scanf("%d", &a[i]);
//		s[i] = s[i - 1] + a[i];
//	}
//	if (s[n] % 2 == 1)printf("Alice\n");
//	else printf("Bob\n");
//	return 0;
//}



//Trie字符串统计
//https://www.acwing.com/problem/content/837/


//int n;
//const int N = 1e5 + 10;
//int son[N][26], idx, cnt[N];
//
////插入
//void insert(char str[])
//{
//	int p = 0;
//	for (int i = 0; str[i]; i++)
//	{
//		int u = str[i] - 'a';
//		if (!son[p][u])son[p][u] = ++idx;
//		p = son[p][u];
//	}
//	cnt[p]++;
//}
//
////查找出现次数
//int find(char str[])
//{
//	int p = 0;
//	for (int i = 0; str[i]; i++)
//	{
//		int u = str[i] - 'a';
//		if (!son[p][u])return 0;
//		p = son[p][u];
//	}
//
//	return cnt[p];
//}
//
//
//int main()
//{
//	scanf("%d", &n);
//	while (n--)
//	{
//		char op[2];
//		scanf("%s", &op);
//		if (*op == 'I')
//		{
//			char str[N];
//			scanf("%s", &str);
//			insert(str);
//		}
//		else
//		{
//			char str[N];
//			scanf("%s", &str);
//			printf("%d\n", find(str));
//		}
//	}
//
//	return 0;
//}



//最大异或对
//https://www.acwing.com/problem/content/145/

//int n;
//const int N = 1e5 + 10, M = N * 31;
//int a[N];
//int son[M][2], idx;
//
//void insert(int x)
//{
//	int p = 0;
//	for (int i = 30; i >= 0; i--)
//	{
//		int u = x >> i & 1;
//		if (!son[p][u])son[p][u] = ++idx;
//		p = son[p][u];
//	}
//}
//
//int find(int x)
//{
//	int p = 0, res = 0;
//	for (int i = 30; i >= 0; i--)
//	{
//		int u = x >> i & 1;
//		if (son[p][!u])
//		{
//			p = son[p][!u];
//			res = res * 2 + 1;
//		}
//		else
//		{
//			p = son[p][u];
//			res = res * 2 + 0;
//		}
//	}
//	return res;
//}
//
//int main()
//{
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)scanf("%d", &a[i]);
//	for (int i = 0; i < n; i++)insert(a[i]);
//
//	int res;
//	for (int i = 0; i < n; i++)
//	{
//		res = max(res, find(a[i]));
//	}
//	printf("%d", res);
//
//	return 0;
//}




//合并集合
//https://www.acwing.com/problem/content/838/

//const int N = 1e5 + 10;
//int n, m;
//int p[N];
//
//
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
//	for (int i = 1; i <= n; i++)p[i] = i;
//
//
//	while (m--)
//	{
//		char op[2];
//		scanf("%s", &op);
//		if (*op == 'M')
//		{
//			int a, b;
//			scanf("%d%d", &a, &b);
//			p[find(a)] = find(b);
//		}
//		else
//		{
//			int a, b;
//			scanf("%d%d", &a, &b);
//			if (find(a) == find(b))printf("Yes\n");
//			else printf("No\n");
//		}
//	}
//	return 0;
//}




// 数字统计
//https://www.luogu.com.cn/problem/P1179


//int main()
//{
//	int l, r, cnt = 0;
//	scanf("%d%d", &l, &r);
//	for (int i = l; i <= r; i++)
//	{
//		int tmp = i;
//		while (tmp)
//		{
//			if (tmp % 10 == 2)cnt++;
//			tmp /= 10;
//		}
//	}
//	printf("%d", cnt);
//
//	return 0;
//}


//校门外的树
//https://www.luogu.com.cn/problem/P1047

//const int N = 1e4 + 10;
//int l, m;
//int fg[N];
//
//int main()
//{
//	scanf("%d%d", &l, &m);
//	while (m--)
//	{
//		int a, b;
//		scanf("%d%d", &a, &b);
//		for (int i = a; i <= b; i++)
//		{
//			fg[i] = 1;
//		}
//	}
//	int cnt = 0;
//	for (int i = 0; i <= l; i++)
//	{
//		if (fg[i] == 0)cnt++;
//	}
//
//	printf("%d", cnt);
//
//	return 0;
//}