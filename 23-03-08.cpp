#pragma warning(disable:4996)

#include<iostream>
#include<algorithm>
#include<string>

using namespace std;


//int main()
//{
//	int n;
//	scanf("%d", &n);
//
//	while (n--)
//	{
//		int h, w;
//		scanf("%d%d", &h, &w);
//		double a = w / 2.0;
//		double b1 = (h - 100) * 0.9 * 0.9;
//		double b2 = (h - 100) * 0.9 * 1.1;
//		if (a > b1 && a < b2)printf("You are wan mei!\n");
//		else if (a >= b2)printf("You are tai pang le!\n");
//		else if (a <= b1) printf("You are tai shou le!\n");
//	}
//	return 0;
//}



//int n;
//struct p 
//{
//	int s;
//	char name[10];
//	int flag = 0;
//}p[50];
//
//int main()
//{
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++)scanf("%d%s", &p[i].s, &p[i].name);
//
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = n; j >= 1; j--)
//		{
//			if (p[i].s != p[j].s && p[i].flag == 0 && p[j].flag == 0)
//			{
//				printf("%s %s\n", p[i].name, p[j].name);
//				p[i].flag = 1;
//				p[j].flag = 1;
//			}
//		}
//	}
//
//	return 0;
//}



//int prime(int num)
//{
//	if (num < 2)return 0;
//	for (int i = 2; i <= num / i; i++)
//	{
//		if (num % i == 0)return 0;
//	}
//	return 1;
//}
//
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	while (n--)
//	{
//		int num;
//		scanf("%d", &num);
//		
//		if (prime(num))printf("Yes\n");
//		else printf("No\n");
//	}
//
//	return 0;
//}


//int main()
//{
//	char a[100], b[100];
//	scanf("%s%s", &a, &b);
//	char m = 0, n = 0;
//	int m1 = 0, n1 = 0;
//
//	for (int i = 0; a[i]; i++)
//	{
//		if (a[i] < '0' || a[i]>'9')
//		{
//			m = '?';
//			break;
//		}
//		else
//		{
//			m1 = m1 * 10 + a[i] - '0';
//		}
//	}
//	for (int i = 0; b[i]; i++)
//	{
//		if (b[i] < '0' || b[i]>'9')
//		{
//			n = '?';
//			break;
//		}
//		else
//		{
//			n1 = n1 * 10 + b[i] - '0';
//		}
//	}
//
//	if (m1 > 1000 || m1 == 0)m = '?';
//	else if (n1 > 1000 || n1 == 0)n = '?';
//
//	if (m == '?' && n == '?')printf("? + ? = ?\n");
//	else if (m == '?' && n != '?')printf("? + %d = ?", n1);
//	else if (m != '?' && n == '?')printf("%d + ? = ?", m1);
//	else printf("%d + %d = %d", m1, n1, m1 + n1);
//
//	return 0;
//}



//int main()
//{
//	int d;
//	scanf("%d", &d);
//	if (d == 5)printf("7");
//	printf("%d", (d + 2) % 7);
//	return 0;
//}



//int n;
//int a, b;
//
//int main()
//{
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		int num;
//		scanf("%d", &num);
//		if (num % 2 == 0)b++;
//		else a++;
//	}
//
//	printf("%d %d", a, b);
//	return 0;
//}




//int main()
//{
//	cout << "I'm gonna WIN!" << endl;
//	cout << "I'm gonna WIN!" << endl;
//	cout << "I'm gonna WIN!" << endl;
//}



//L1-011 A-B
//https://pintia.cn/problem-sets/994805046380707840/exam/problems/994805130426171392

//int main()
//{
//	string a, b;
//	getline(cin, a);
//	getline(cin, b);
//
//	for (int i = 0; a[i]; i++)
//	{
//		for (int j = 0; b[j]; j++)
//		{
//			if (a[i] == b[j])a.erase(a.begin() + i);
//			i--;
//		}
//	}
//	cout << a;
//}




//L1-019 谁先倒
//https://pintia.cn/problem-sets/994805046380707840/exam/problems/994805118568873984

//const int N = 110;
//int a, b, q, a1[N], a2[N], b1[N], b2[N];
//
//int main()
//{
//	scanf("%d%d%d", &a, &b, &q);
//	for(int i=1;i<=q;i++)
//	{
//		scanf("%d%d%d%d", &a1[i], &a2[i], &b1[i], &b2[i]);
//	}
//
//	for (int i = 1; a >= 0 && b >= 0; i++)
//	{
//		if (a1[i] + b1[i] == a2[i] && a1[i + b1[i] != b2[i]])a--;
//		else if (a1[i] + b1[i] == b2[i] && a1[i] + b1[i] != a2[i])b--;
//	}
//	if (a < 0) cout << 'A' << endl << b << endl;
//	else if (b < 0)cout << 'B' << endl << a << endl;
//	return 0;
//}



//L1-016 查验身份证
//https://pintia.cn/problem-sets/994805046380707840/exam/problems/994805122985476096

//const int N = 110;
//int n;
//char id[N][19];
//int w[17] = { 7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2 };
//char m[11] = { '1','0','X','9','8','7','6','5','4','3','2' };
//int f[N];
//
//int main()
//{
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++)scanf("%s", id[i]);
//	int cnt = 0;
//
//	for (int i = 1; i <= n; i++)
//	{
//		int res = 0;
//		for (int j = 0; j <= 16; j++)
//		{
//			res += ((id[i][j] - '1' + 1) * w[j]);
//		}
//		if (m[res % 11] == id[i][17])cnt++;
//		else f[i] = i;
//	}
//
//	if (cnt == n)printf("All passed\n");
//	else
//	{
//		for (int i = 1; i <= n; i++)
//			if (f[i] != 0)printf("%s\n", id[f[i]]);
//	}
//
//	return 0;
//}



//整数划分
//https://www.acwing.com/problem/content/902/

//方法1
//const int N = 1010, mod = 1e9 + 7;
//int n;
//int f[N][N];
//
//int main()
//{
//	scanf("%d", &n);
//
//	f[0][0] = 1;
//	for (int i = 1; i <= n; i++)
//		for (int j = 1; j <= i; j++)
//			f[i][j] = (f[i - 1][j - 1] + f[i - j][j]) % mod;
//	int res = 0;
//	for (int i = 1; i <= n; i++)res = (res + f[n][i]) % mod;
//	printf("%d", res);
//	return 0;
//}

//方法2
//const int N = 1010, mod = 1e9 + 7;
//int n;
//int f[N];
//
//
//int main()
//{
//	scanf("%d", &n);
//	f[0] = 1;	 
//	for (int i = 1; i <= n; i++)
//		for (int j = i; j <= n; j++)
//			f[j] = (f[j] + f[j - i]) % mod;
//
//	printf("%d", f[n]);
//
//	return 0;
//}