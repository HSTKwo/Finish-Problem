#pragma warning(disable:4996)

#include<iostream>
#include<algorithm>
#include<cmath>

using namespace std;

//https://www.luogu.com.cn/problem/P1824



//#define tp int
//const tp N = 1e6 + 10;
//tp n, c, a[N];
//
//
//bool check(int x)
//{
//	tp cnt = 0, i = 1, j = 1;
//	
//	//´íÎóÀý×Ó
//	//while (i < n)
//	//{
//	//	j++;
//	//	if (a[j] - a[i] < x)cnt++;
//	//	else i = j;
//	//}
//
//	for (i = 2; i <= n; i++)
//	{
//		if (a[i] - a[j] < x)cnt++;
//		else j = i;
//	}
//
//	if (cnt > n - c)return 0;
//	else return 1;
//}
//
//int main()
//{
//	cin >> n >> c;
//	for (tp i = 1; i <= n; i++)cin >> a[i];
//
//	sort(a + 1, a + n + 1);
//
//	tp l = 0, r = 1e8, mid;
//
//	while (l < r)
//	{
//		mid = l + r + 1 >> 1;
//		if (check(mid))l = mid;
//		else r = mid - 1;
//	}
//
//	cout << l << endl;
//
//	return 0;
//}





//https://www.luogu.com.cn/problem/P1177

//const int N = 1e5 + 10;
//int n,a[N];
//
//void quick_sort(int l, int r)
//{
//	if (l >= r)return;
//	int x = a[l + r >> 1];
//	int i = l - 1, j = r + 1;
//	while (i < j)
//	{
//		do i++; while (a[i] < x);
//		do j--; while (a[j] > x);
//		if (i < j)swap(a[i], a[j]);
//	}
//	quick_sort(l, j);
//	quick_sort(j+1, r);
//}
//
//int main ()
//{
//	cin >> n;
//	for (int i = 1; i <= n; i++)cin >> a[i];
//
//	quick_sort(1, n);
//
//	for (int i = 1; i <= n; i++)cout << a[i] << ' ';
//
//	return 0;
//}