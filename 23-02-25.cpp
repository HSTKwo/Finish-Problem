#pragma warning(disable:4996)

#include<cstring>
#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;

//[传智杯 #3 决赛] 商店
//https://www.luogu.com.cn/problem/P8837

//const int N = 1e5 + 10;
//int n, m;
//int mny[N], prc[N];
//
//bool cmp(int a, int b)
//{
//	return a > b;
//}
//
//
//int main()
//{
//	scanf("%d%d", &n, &m);
//	for (int i = 0; i < n; i++)scanf("%d", &mny[i]);
//	for (int i = 0; i < m; i++)scanf("%d", &prc[i]);
//	sort(mny, mny + n, cmp);
//	sort(prc, prc + m, cmp);
//
//	int ans = 0;
//	for (int i = 0, j = 0; i < n && j < m; j++)
//	{
//		if (mny[i] >= prc[j])ans++, i++;
//	}
//	printf("%d\n", ans);
//	return 0;
//}



//Minimum LCM
//https://www.luogu.com.cn/problem/CF1765M

//int find(int x)
//{
//	for (int i = 2; i <= x / i; i++)
//	{
//		if (x % i == 0)return i;
//	}
//	return x;
//}
//
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	while (n--)
//	{
//		int m;
//		scanf("%d", &m);
//		if (m % 2 == 0)printf("%d %d\n", m / 2, m / 2);
//		else printf("%d %d\n", m / find(m), m - m / find(m));
//	}
//	return 0;
//}



//Stand-up Comedian
//https://www.luogu.com.cn/problem/CF1792B

//int n;
//
//int main()
//{
//	scanf("%d", &n);
//	while (n--)
//	{
//		int a, b, c, d;
//		scanf("%d%d%d%d", &a, &b, &c, &d);
//		if (a == 0)
//		{
//			printf("1\n");
//			continue;
//		}
//		int cnt = 0;
//		if (b > c)	swap(b, c);
//		cnt += a + b * 2 + min(a + 1, c - b + d);
//		printf("%d\n", cnt);
//	}
//	return 0;
//}



//Alternating Deck (hard version)
//https://www.luogu.com.cn/problem/CF1786A2?contestId=101376

//int n, m;
//int main()
//{
//	scanf("%d", &m);
//	while (m--)
//	{
//		scanf("%d", &n);
//		int a1, a2, b1, b2, tem = n;
//		a1 = a2 = b1 = b2 = 0;
//		for (int i = 1;; i++)
//		{
//			if (n >= i)
//			{
//				if (i % 4 == 1 || i % 4 == 0)
//				{
//					if (i % 4 == 1)a1 += i / 2 + 1, a2 += i / 2;
//					else a1 += i / 2, a2 += i / 2;
//				}
//				else if (i % 4 == 2 || i % 4 == 3)
//				{
//					if (i % 4 == 2)b1 += i / 2, b2 += i / 2;
//					else b1 += i / 2, b2 += i / 2 + 1;
//				}
//				n -= i;
//				if (n == 0)break;
//			}
//			else
//			{
//				if (i % 4 == 1 || i % 4 == 0)
//				{
//					for (int j = a1 + a2 + b1 + b2 + 1; j <= tem; j++)
//					{
//						if (j % 2 == 1)a1++;
//						else a2++;
//					}
//				}
//				else if (i % 4 == 2 || i % 4 == 3)
//				{
//					for (int j = a1 + a2 + b1 + b2 + 1; j <= tem; j++)
//					{
//						if (j % 2 == 1)b1++;
//						else b2++;
//					}
//				}
//				break;
//			}
//		}
//		printf("%d %d %d %d\n", a1, a2, b1, b2);
//	}
//	return 0;
//}


//Polycarp and the Day of Pi
//https://www.luogu.com.cn/problem/CF1790A?contestId=101376

//char s[31] = "314159265358979323846264338327";
//int m;
//
//int main()
//{
//	scanf("%d", &m);
//	while (m--)
//	{
//		char p[31];
//		scanf("%s", p);
//		int res = 0;
//		for (int i = 0; s[i]; i++)
//		{
//			if (s[i] == p[i])res++;
//			else break;
//		}
//		printf("%d\n", res);
//	}
//}



//Edge Checker 2
//https://www.luogu.com.cn/problem/AT_abc285_a?contestId=101376


//int main()
//{
//	int a, b;
//	scanf("%d%d", &a, &b);
//	if (a / 2 == b || a * 2 + 1 == b || a * 2 == b)printf("Yes\n");
//	else printf("No\n");
//
//	return 0;
//}