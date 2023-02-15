#pragma warning(disable:4996)
#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;


//约数个数
//https://www.acwing.com/problem/content/872/

//const int mod = 1e9 + 7;
//typedef pair<int, int> PII;
//int n;
//unordered_map<int, int> divisors;
//
//int main()
//{
//	scanf("%d", &n);
//	while (n--)
//	{
//		int a;
//		scanf("%d", &a);
//		for (int i = 2; i <= a / i; i++)
//		{
//			int s = 0;
//			if (a % i == 0)
//			{
//				while (a % i == 0)a /= i, divisors[i]++;
//			}
//			
//		}
//		if (a > 1)divisors[a]++;
//	}
//
//	int ans = 1;
//	for (auto item : divisors)
//	{
//		ans *= item.second + 1;
//	}
//	printf("%d", ans % mod);
//
//
//	return 0;
//}



//约数之和 
//https://www.acwing.com/problem/content/873/

//const int mod = 1e9 + 7;
//int n;
//unordered_map<int, int>primes;


//int main()
//{
//	scanf("%d", &n);
//	while (n--)
//	{
//		int a;
//		scanf("%d", &a);
//		for (int i = 2; i <= a / i; i++)
//		{
//			while (a % i == 0)primes[i]++, a /= i;
//		}
//		if (a > 1)primes[a]++;
//	}
//
//	long long res = 1;
//	for (auto item : primes)
//	{
//		int a = item.first, b = item.second, t = 1;
//		while (b--)t = t * a + 1;
//		res *= t;
//	}
//	printf("%d", res % mod);
//
//	return 0;
//}



//最大公约数
//https://www.acwing.com/problem/content/874/

//int gcd(int a, int b)
//{
//	return b ? gcd(b, a % b) : a;
//}
//
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	while (n--)
//	{
//		int a, b;
//		scanf("%d%d", &a, &b);
//		printf("%d\n", gcd(a, b));
//	}
//
//	return 0;
//}


//模拟散列表
//https://www.acwing.com/problem/content/842/

int n;

//拉链法
//const int N = 100003;
//int h[N], e[N], ne[N], idx = 0;
//
//void insert(int x)
//{
//	int k = (x % N + N) % N;
//	e[idx] = k, ne[idx] = h[k], h[k] = idx++;	
//}
//
//bool find(int x)
//{
//	int k = (x % N + N) % N;
//	for (int i = h[k]; i != -1; i = ne[i])
//	{
//		if (e[i] == x)return true;
//	}
//	return false;
//}

//开放寻址法
//const int N = 2e5 + 3, null = 0x3f3f3f3f;
//int h[N];
//int find(int x)
//{
//	int k = (x & N + N) % N;
//	while (h[k] != null && h[k] != x)
//	{
//		k++;
//		if (k == N)k = 0;
//	}
//	return k;
//}
//
//
//int main()
//{
//	scanf("%d", &n);
//	memset(h, 0x3f, sizeof h);
//	while (n--)
//	{
//		char op[2];
//		scanf("%s", op);
//		if (op[0] == 'I')
//		{
//			int x;
//			scanf("%d", &x);
//			h[find(x)] = x;
//		}
//		else
//		{
//			int x;
//			scanf("%d", &x);
//			if (h[find(x)] == x)printf("Yes\n");
//			else printf("No\n");
//		}
//	}
//
//	return 0;
//}



//字符串哈希
//https://www.acwing.com/problem/content/843/

//typedef unsigned long long ULL;
//const int N = 1e5 + 10, P = 131;
//int n, m;
//char str[N];
//ULL h[N], p[N];
//
//ULL get(int l, int r)
//{
//	return h[r] - h[l - 1] * p[r - l + 1];
//}
//
//int main()
//{
//	scanf("%d%d", &n, &m);
//	scanf("%s", str + 1);
//
//	p[0] = 1;
//	for (int i = 1; i <= n; i++)
//	{
//		h[i] = h[i - 1] * P + str[i];
//		p[i] = p[i - 1] * P;
//	}
//
//	while (m--)
//	{
//		int l1, r1, l2, r2;
//		scanf("%d%d%d%d", &l1, &r1, &l2, &r2);
//		if (get(l1, r1) == get(l2, r2))printf("Yes\n");
//		else printf("No\n");
//	}
//
//	return 0;
//}




