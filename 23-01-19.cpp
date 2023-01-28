#pragma warning(disable:4996)

#include<iostream>
#include<algorithm>

using namespace std;


//https://www.luogu.com.cn/problem/P8198

//const int N = 1e5 + 10;
//long long  l, r, mid, n, k, a[N];
//
//bool check(long long x)
//{
//	int day = 1; long long sum = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		if (a[i] * a[i] > x) return 0;
//		sum += a[i] * a[i];
//		if (sum > x) sum = a[i] * a[i], day++;
//		if (day > k)return 0;
//	}
//	return 1;
//}
//
//
//int main()
//{
//	cin >> n >> k;
//	for (int i = 1; i <= n; i++)cin >> a[i];
//	for (int i = 1; i <= n; i++)r += a[i] * a[i];
//	
//	while (l < r)
//	{
//		mid = l + r >> 1;
//		if (check(mid))r = mid;
//		else l = mid + 1;
//	}
//	cout << l << endl;
//
//	return 0;
//}
//
//



//https://www.luogu.com.cn/problem/P1068

//const int N = 5e3 + 5;
//struct people
//{
//	int id, scr;
//}p[N];
//
//int n, m;
//
//
//bool cmp(people a, people b)
//{
//	if (a.scr != b.scr)return a.scr > b.scr;
//	else return a.id < b.id;
//}
//
//int main()
//{
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++)cin >> p[i].id >> p[i].scr;
//	int num = m * 1.5;
//	sort(p + 1, p + 1 + n, cmp);
//	while (p[num].scr == p[num + 1].scr)num++;
//	cout << p[num].scr <<' '<< num << endl;
//	for (int i = 1; i <= num; i++)cout << p[i].id << ' ' << p[i].scr << endl;
//
//	return 0;
//}