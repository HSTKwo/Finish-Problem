#pragma warning(disable:4996)

#include<iostream>

using namespace std;





//https://www.acwing.com/problem/content/791/
//
//int a[1000010];
//
//int main()
//{
//	int n, q; cin >> n >> q;
//	for (int i = 1; i <= n; i++)cin >> a[i];
//	
//	while (q--)
//	{
//		int num; cin >> num;
//		int l = 0, r = n, mid;
//
//		while (l < r)
//		{
//			mid = l + r >> 1;
//			if (a[mid] >= num)r = mid;
//			else l = mid + 1;
//		}
//		if (a[l] != num)
//		{
//			cout << "-1 -1" << endl;
//			continue;
//		}
//		else cout << l-1 << ' ';
//		
//		l = 0, r = n;
//		while (l < r)
//		{
//			mid = l + r + 1 >> 1;
//			if (a[mid] <= num)l = mid;
//			else r = mid - 1;
//		}
//		cout << l-1 << endl;
//		
//	}
//
//
//	return 0;
//}

//https://www.luogu.com.cn/problem/P1873
//
//#include<iostream>
//
//using namespace std;
//
//long long a[1000001];
//long  n, m;
//
//bool check(long long h)
//{
//	long long ans = 0;
//	for (long long i = 1; i <= n; i++)
//	{
//		if (a[i] > h) ans += a[i] - h;
//	}
//	return ans >= m;
//}
//
//int main()
//{
//	cin >> n >> m;
//	for (long long i = 1; i <= n; i++) cin >> a[i];
//	long long l = 0, r = 2e9 + 10;
//	while (l < r)
//	{
//		long mid = l + r + 1 >> 1;
//		if (check(mid)) l = mid;
//		else r = mid - 1;
//	}
//
//	cout << l << endl;
//	return 0;
//}





//https://www.luogu.com.cn/problem/P2440
// 
//long long a[100010];
//
//bool check(long long len, long long n, long long k)
//{
//	int cnt = 0;
//	for (int i = 1; i <= n; i++)cnt += a[i] / len;
//	if (cnt >= k)return true;
//	else return false;
//}
//
//int main()
//{
//	long long n, k; cin >> n >> k;
//	for (int i = 1; i <= n; i++) cin >> a[i];
//	long long l = 0, r = 1e8+1, mid;
//	//¶þ·Ö´ð°¸
//	while (l < r)
//	{
//		mid = l + r + 1 >> 1;
//		if (check(mid, n, k)) l = mid;
//		else r = mid - 1;
//	}
//	if (l >= 1)cout << l << endl;
//	else cout << 0;
//	
//	return 0;
//}




//https://www.luogu.com.cn/problem/P1258
// 
//int main()
//{
//	double s, a, b; cin >> s >> a >> b;
//	//scanf("%lf%lf%lf", &s, &a, &b);
//	double t1, t2, x, y;
//	double l = 0, r = s, mid;
//	
//	do{
//		mid = (l + r) / 2.0;
//		x = mid / b;
//		y = (mid - x * a) / (a + b);
//		t1 = x + (s - mid) / a;
//		t2 = x + y + (s - a * (x + y)) / b;
//		if (t1 < t2)r = mid;
//		else l = mid;
//
//	} while (fabs(t1 - t2) > 1e-8);
//
//	printf("%.6lf", t1);
//
//	return 0;
//}

