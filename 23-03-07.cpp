#pragma warning(disable:4996)
#include<iostream>
#include<algorithm>

using namespace std;

//L1-005 考试座位号
//https://pintia.cn/problem-sets/994805046380707840/exam/problems/994805140211482624

//int n, m;
//struct p 
//{
//	char a[17];
//	int b;
//	int c;
//}p[1010];
//
//int main()
//{
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++)scanf("%s%d%d", &p[i].a, &p[i].b, &p[i].c);
//	scanf("%d", &m);
//	while (m--)
//	{
//		int num;
//		scanf("%d", &num);
//		for (int i = 1; i <= n; i++)
//		{
//			if (p[i].b == num)
//				printf("%s %d\n", p[i].a, p[i].c);
//		}
//	}
//
//	return 0;
//}



//L1-003 个位数统计
//https://pintia.cn/problem-sets/994805046380707840/exam/problems/994805143738892288


//char s[1010];
//int a[9];
//
//int main()
//{
//	scanf("%s", s);
//
//	for (int i = 0; s[i]; i++)
//	{
//		a[s[i] - '1' + 1]++;
//	}
//
//	for (int i = 0; i <= 9; i++)
//	{
//		if(a[i])printf("%d:%d\n", i, a[i]);
//	}
//	
//	return 0;
//}





// 石子合并
// https://www.acwing.com/problem/content/284/

//const int N = 310;
//int s[N], n;
//int f[N][N];
//
//int main()
//{
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++)scanf("%d", &s[i]);
//	for (int i = 1; i <= n; i++)s[i] += s[i - 1];
//
//	for (int len = 2; len <= n; len++)
//	{
//		for (int i = 1; i + len - 1 <= n; i++)
//		{
//			int l = i, r = i + len - 1;
//			f[l][r] = 1e89;
//			for (int k = l; k < r; k++)
//			{
//				f[l][r] = min(f[l][r], f[l][k] + f[k + 1][r] + s[r] - s[l - 1]);
//			}
//		}
//	}
//	printf("%d", f[1][n]);
//	return 0;
//}




//最长公共子序列
//https://www.acwing.com/problem/content/899/

//const int N = 1010;
//int n, m;
//int a[N], b[N];
//int f[N][N];
//
//int main()
//{
//	scanf("%d%d", &n, &m);
//	scanf("%s%s", a + 1, b + 1);
//
//	for(int i=1;i<=n;i++)
//		for (int j = 1; j <= n; j++)
//		{
//			f[i][j] = max(f[i - 1][j], f[i][j - 1]);
//			if (a[i] == b[j])f[i][j] = max(f[i][j], f[i - 1][j - 1] + 1);
//		}
//	printf("%d", f[n][m]);
//	return 0;
//}




// 最长上升子序列
// https://www.acwing.com/problem/content/897/
 
//const int N = 1010;
//int n, a[N], f[N], res;
//
//int main()
//{
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++)scanf("%d", &a[i]);
//
//	for (int i = 1; i <= n; i++)
//	{
//		f[i] = 1;
//		for (int j = 1; j <= n; j++)
//		{
//			if (a[i] < a[j])f[i] = max(f[i], f[j] + 1);
//		}
//		res = max(res, f[i]);
//	}
//	printf("%d", res);
//	return 0;
//}
