#pragma warning(disable:4996)

//#include<iostream>
//#include<algorithm>
//
//using namespace std;
//
////https://www.luogu.com.cn/problem/CF1676E
//
//const int N = 1.5e5 + 10;
//int t, n, q, num;
//
////³¬Ê±
////bool check(int x,int a[])
////{
////	int ans = 0, cnt = 0;
////	for (int i = n; i >= 0; i--)
////	{
////		ans += a[i];
////		cnt++;
////		if (ans >= num)break;
////	}
////
////	if (cnt <= x)return 1;
////	else return 0;
////}
//
//
//bool cmp(int x, int y)
//{
//	return x > y;
//}
//
//int main()
//{
//	cin >> t;
//	while (t--)
//	{
//		int a[N], sum[N] = { 0 }; cin >> n >> q;
//		for (int i = 1; i <= n; i++)cin >> a[i];
//
//		sort(a + 1, a + 1 + n,cmp);
//		for (int i = 1; i <= n; i++) sum[i] = sum[i - 1] + a[i];
//
//		while (q--)
//		{
//			cin >> num;
//
//			int l = 0, r = n + 1, mid;
//			
//			while (l < r)
//			{
//				mid = l + r >> 1;
//				if (sum[mid]>=num)r = mid;
//				else l = mid + 1;
//			}
//			if (l > n)cout << "-1" << endl;
//			else cout << l << endl;
//		}
//	}
//	return 0;
//}




//https://www.luogu.com.cn/problem/AT_abc146_c?contestId=98558

//typedef long long ll;
//ll a, b, c;
//
//bool check(ll num)
//{
//	int ws = 1, tmp = num;
//	while (tmp > 9)
//	{
//		tmp = tmp / 10;
//		ws++;
//	}
//
//	if (c >= num * a + ws * b) return 1;
//	else return 0;
//}
//
//
//int main()
//{
//	cin >> a >> b >> c;
//	ll l = 0, r = 1e9;
//	while (l < r)
//	{
//		ll mid = l + r +1 >> 1;
//		if (check(mid))l = mid;
//		else r = mid -1;
//	}
//	cout << l << endl;
//	return 0;
//}



//https://www.luogu.com.cn/problem/CF1746B

//const int N = 2e5 + 10;
//
//int main()
//{
//	int t;
//	cin >> t;
//	while (t--)
//	{
//		int num, ans = 0, a[N]; cin >> num;
//		for (int i = 1; i <= num; i++)cin >> a[i];
//		int l = 1, r = num;
//		while (l < r)
//		{
//			while (a[l] == 0)l++;
//			while (a[r] == 1)r--;
//			if (l < r)swap(a[l], a[r]),ans++;
//		}
//		cout << ans << endl;
//	}
//
//	return 0;
//}




//https://www.luogu.com.cn/problem/CF456A

//const int N = 1e5 + 10;
//int n;
//
//struct computer
//{
//	int jg, zl;
//}pc[N];
//
//
//bool tmp(computer a, computer b)
//{
//	return a.jg > b.jg;
//}
//
//int main()
//{
//	cin >> n;
//	for (int i = 1; i <= n; i++)cin >> pc[i].jg >> pc[i].zl;
//	sort(pc + 1, pc + n + 1, tmp);
//
//	for (int i = 2; i <= n; i++)
//	{
//		if (pc[i].zl < pc[i - 1].zl)
//		{
//			cout << "Happy Alex" << endl;
//			return 0;
//		}
//	}
//
//	cout << "Poor Alex" << endl;
//	return 0;
//}


//https://www.luogu.com.cn/problem/CF750A

//int n, k;
//
//int main()
//{
//	cin >> n >> k;
//	int tm = 240 - k, ans = 0, i;
//
//	for (i = 1; i <= n; i++)
//	{
//		ans += i * 5;
//		if (ans > tm)break;
//	}
//	cout << i - 1;
//	return 0;
//}



//https://www.luogu.com.cn/problem/CF520A 


//const int N = 110;
//int n, flag[26];
//char str[N];
//
//
//int main()
//{
//	cin >> n;
//	for (int i = 1; i <= n; i++)cin >> str[i];
//
//	for (int i = 1; i <= n; i++)
//	{
//		if (str[i] >= 'a')flag[str[i] - 'a'] = 1;
//		else if (str[i] >= 'A')flag[str[i] - 'A'] = 1;
//	}
//	int ans = 0;
//	for (int i = 0; i < 26; i++)
//	{
//		ans += flag[i];
//	}
//	if (ans == 26)cout << "YES" << endl;
//	else cout << "NO" << endl;
//	return 0;
//}





//typedef long long ll;
//const int N = 5e5 + 10;
//int a[N], tmp[N], n;
//
//ll merge_sort(int l, int r)
//{
//	if (l >= r)return 0;
//	int mid = l + r >> 1;
//	ll ans = merge_sort(l, mid) + merge_sort(mid + 1, r);
//
//	int k = 0, i = l, j = mid + 1;
//	while (i <= mid && j <= r)
//	{
//		if (a[i] <= a[j])tmp[k++] = a[i++];
//		else tmp[k++] = a[j++], ans += mid - i + 1;
//	}
//
//	while (i <= mid)tmp[k++] = a[i++];
//	while (j <= r)tmp[k++] = a[j++];
//	for (int i = l, j = 0; i <= r; i++, j++)a[i] = tmp[j];
//	return ans;
//}
//
//int main()
//{
//	cin >> n;
//	for (int i = 1; i <= n; i++)cin >> a[i];
//
//	cout << merge_sort(1, n) << endl;
//
//	return 0;
//}