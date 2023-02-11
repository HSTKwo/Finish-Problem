#pragma warning(disable:4996)
#include<iostream>
#include<algorithm>

using namespace std;

//你的飞碟在这儿Your Ride Is Here
//https://www.luogu.com.cn/problem/P1200

//char a[7], b[7];
//int x = 1, y = 1;
//
//int main()
//{
//	scanf("%s%s", &a, &b);
//	
//	for (int i = 0; a[i] != 0; i++)
//	{
//		x *= (a[i] - 'A' + 1);
//	}
//
//	for (int i = 0; b[i] != 0; i++)
//	{
//		y *= (b[i] - 'A' + 1);
//	}
//	if (x % 47 == y % 47)printf("GO");
//	else printf("STAY");
//	return 0;
//}



//哥德巴赫猜想
//https://www.luogu.com.cn/problem/P1304

//bool is_prime(int x)
//{
//	for (int i = 2; i * i <= x; i++)
//	{
//		if (x % i == 0)
//			return false;
//	}
//	return true;
//}
//void write(int a)
//{
//	if (a == 4)
//	{
//		printf("4=2+2\n");
//		return;
//	}
//	for (int i = 3; i + 2 <= a; i += 2)
//	{
//		if (is_prime(i) && 2 + i == a)
//		{
//			printf("%d=2+%d\n", a, i);
//			return;
//		}
//	}
//	for (int i = 3; i + 3 <= a; i += 2)
//	{
//		if (is_prime(i) && is_prime(a - i))
//		{
//			printf("%d=%d+%d\n", a, min(i, a - i), max(i, a - i));
//			return;
//		}
//	}
//}
//int n;
//int main()
//{
//	scanf("%d", &n);
//	for (int i = 4; i <= n; i += 2)
//		write(i);
//	return 0;
//}



//Epic Game
// https://www.luogu.com.cn/problem/CF119A

//int a, b, n;
//int x = 0, y = 0;
//
//int gcd(int a, int b)
//{
//	return b ? gcd(b, a % b) : a;
//}
//
//int main()
//{
//	scanf("%d%d%d", &a, &b, &n);
//	while (n)
//	{
//		if (x <= y)
//		{
//			n -= gcd(a, n);
//			x++;
//		}
//		else
//		{
//			n -= gcd(b, n);
//			y++;
//		}
//	}
//	if (x > y)printf("0");
//	else printf("1");
//
//	return 0;
//}



//找一下素数
//https://www.luogu.com.cn/problem/T313265?contestId=100666

//int n, q;
//
//bool prime(int x)
//{
//	for (int i = 2; i * i <= x; i++)
//	{
//		if (x % i == 0)return 0;
//	}
//	return 1;
//}
//
//int main()
//{
//	scanf("%d%d", &n, &q);
//	while (q--)
//	{
//		int k;
//		scanf("%d", &k);
//		int cnt = 0;
//
//		for (int i = 2; i <= n; i++)
//		{
//			if (prime(i))cnt++;
//			if (cnt == k)
//			{
//				printf("%d\n", i);
//				break;
//			}
//		}
//	}
//
//	return 0;
//}


//还是素数
//https://www.luogu.com.cn/problem/T313267?contestId=100666

//int n, l, r;
//
//bool prime(int x)
//{
//	if (x == 1)return 0;
//	for (int i = 2; i * i <= x; i++)
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
//		scanf("%d%d", &l, &r);
//		int cnt = 0;
//		for (int i = l; i <= r; i++)
//		{
//			if (prime(i))
//			{
//				if (i < 10)cnt++;
//				else
//				{
//					int sum = 0;
//					int tmp = i;
//					while (tmp)
//					{
//						sum += tmp % 10;
//						tmp /= 10;
//					}
//					if (prime(sum))cnt++;
//				}
//			}
//		}
//		printf("%d\n", cnt);
//	}
//	return 0;
//}