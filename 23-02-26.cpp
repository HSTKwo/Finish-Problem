#pragma warning(disable:4996)

#include<cstring>
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;



//Scuza
//https://www.luogu.com.cn/problem/CF1742E

//const int N = 2e5 + 10;
//int cnt, n, m;
//long long h[N], s[N];
//
//int main()
//{
//	scanf("%d", &cnt);
//	while (cnt--)
//	{
//		scanf("%d%d", &n, &m);
//		for (int i = 1; i <= n; i++)
//		{
//			long long  x;
//			scanf("%lld", &x);
//			h[i] = max(h[i - 1], x);		//存储到达这一层的最大跨度
//			s[i] = s[i - 1] + x;
//		}
//
//		while (m--)
//		{
//			long long k;
//			scanf("%lld", &k);
//			int l = 0, r = n + 1;
//			while (l + 1 != r)
//			{
//				int mid = l + r >> 1;
//				if (h[mid] <= k)l = mid;
//				else r = mid;
//			}
//			printf("%lld ", s[l]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//[USACO1.3]混合牛奶 Mixing Milk
//https://www.luogu.com.cn/problem/P1208

//typedef pair<int, int>PII;
//int n, m;
//vector<PII>arr;
//
//bool cmp(PII a, PII b)
//{
//	return a.first < b.first;
//}
//
//int main()
//{
//	scanf("%d%d", &n, &m);
//	while (m--)
//	{
//		int p, a;
//		scanf("%d%d", &p, &a);
//		arr.push_back({ p,a });
//	}
//	sort(arr.begin(), arr.end(), cmp);
//	int ans = 0;
//	
//	for (auto item : arr)
//	{
//		if (n >= item.second)
//		{
//			n -= item.second;
//			ans += item.first * item.second;
//		}
//		else
//		{
//			ans += item.first * n;
//			break;
//		}
//	}
//
//	printf("%d", ans);
//	return 0;
//}
