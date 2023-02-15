#pragma warning(disable:4996)
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


//试除法判定质数
//https://www.acwing.com/problem/content/description/868/

//int n, a;
//
//bool prime(int x)
//{
//	if (x < 2)return 0;
//	for (int i = 2; i <= x / i; i++)
//	{
//		if (x % i == 0)return 0;
//	}
//	return 1;
//}
//
//int main()
//{
//	scanf("%d", &n);
//	while (n--)
//	{
//		scanf("%d", &a);
//		if (prime(a))printf("Yes\n");
//		else printf("No\n");
//	}
//	return 0;
//}



//分解质因数
//https://www.acwing.com/problem/content/description/869/


//int n, a;
//
//void divide(int x)
//{
//	for (int i = 2; i < x / i; i++)
//	{
//		if (x % i == 0)
//		{
//			int cnt = 0;
//			while (x % i == 0)x /= i, cnt++;
//			printf("%d %d\n", i, cnt);
//		}
//	}
//	if (x > 1)printf("%d 1\n", x);
//	printf("\n");
//}
//
//int main()
//{
//	scanf("%d", &n);
//	while (n--)
//	{
//		scanf("%d", &a);
//		divide(a);
//	}
//	return 0;
//}



//筛质数
//https://www.acwing.com/problem/content/870/

//const int N = 1e6 + 10;
//
//int n, primes[N], cnt;
//bool st[N];

//埃氏筛
//void get_primes(int x)
//{
//	for (int i = 2; i <= n; i++)
//	{
//		if (!st[i])
//		{
//			primes[++cnt] = i;
//			for (int j = i + i; j <= n; j += i)st[j] = true;
//		}
//	}
//}

//线性筛
//void get_primes(int x)
//{
//	for (int i = 2; i <= n; i++)
//	{
//		if (!st[i])primes[++cnt] = i;
//		for (int j = 1; primes[j] <= x / i; j++)
//		{
//			st[primes[j] * i] = 1;
//			if (i % primes[j] == 0)break;
//		}
//	}
//}
//
//int main()
//{
//	scanf("%d", &n);
//	get_primes(n);
//	cout << cnt << endl;
//
//	return 0;
//}


//试除法求约数
//https://www.acwing.com/problem/content/871/

//int n;
//
//vector<int> get_divisors(int x)
//{
//	vector<int>res;
//	for (int i = 1; i <= x / i; i++)
//	{
//		if (x % i == 0)
//		{
//			res.push_back(i);
//			if (i != x / i)res.push_back(x / i);
//		}
//	}
//	sort(res.begin(), res.end());
//	return res;
//}
//
//
//int main()
//{
//	scanf("%d", &n);
//	while (n--)
//	{
//		int a;
//		scanf("%d", &a);
//		auto x = get_divisors(a);
//		for (auto item : x)
//		{
//			cout << item << ' ';
//		}
//		cout << endl;
//	}
//
//	return 0;
//}



//陶陶摘苹果
//https://www.luogu.com.cn/problem/P1046

//int a[10], h, cnt = 0;
//
//
//int main()
//{
//	for (int i = 0; i < 10; i++)	scanf("%d", &a[i]);
//	scanf("%d", &h);
//	for (int i = 0; i < 10; i++)if (a[i] <= h + 30)cnt++;
//	cout << cnt << endl;
//	return 0;
//}


//路径计数2
//https://www.luogu.com.cn/problem/P1176

//const int N = 1010;
//int n, m, x, y;
//int a[N][N], b[N][N];
//
//int main()
//{
//	scanf("%d%d", &n, &m);
//
//	for (int i = 1; i <= m; i++)
//	{
//		cin >> x >> y;
//		b[x][y] = 1;	//b数组标记不可以走的
//	}
//
//	a[1][1] = 1;
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= n; j++)
//		{
//			a[i][j] += a[i - 1][j] + a[i][j - 1];		//赋值
//			if (b[i][j] == 1) a[i][j] = 0;				//不可以走的赋值0
//			a[i][j] = a[i][j] % 100003;					//取%
//		}
//	}
//
//	cout << a[n][n] << endl;
//
//	return 0;
//}



//高低位交换
//https://www.luogu.com.cn/problem/P1100


//int main()
//{
//	long long n, ans[32], res = 0;
//	scanf("%d", &n);
//
//	for (int i = 31; i >= 0; i--)
//	{
//		ans[i] = n >> i & 1;
//	}
//
//	for (int i = 15; i >= 0; i--)
//	{
//		if (ans[i])res = res * 2 + 1;
//		else res = res * 2 + 0;
//	}
//	for (int i = 31; i >= 16; i--)
//	{
//		if (ans[i])res = res * 2 + 1;
//		else res = res * 2 + 0;
//	}
//	cout << res << endl;
//	return 0;
//}




