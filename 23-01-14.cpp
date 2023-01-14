#pragma warning(disable:4996)

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

long long a[100010], b[100010];
int main()
{
	int m, n; cin >> m >> n;
	for (int i = 1; i <= m; i++) cin >> a[i];	//输入
	for (int i = 1; i <= n; i++) cin >> b[i];

	sort(a + 1, a + m + 1);	//排序

	int ans = 0;

	for (int i = 1; i <= n; i++)
	{
		int l = 0, r = m + 1;
		while (l < r)
		{
			int mid = (l + r) >> 1;
			if (a[mid] <= b[i]) l = mid + 1;	//mid小于等于预估分，左边界右移
			else r = mid;
		}

		if (b[i] <= a[1])ans += a[1] - b[i];
		else ans += min(abs(a[l - 1] - b[i]), abs(a[l] - b[i]));

	}
	
	cout << ans << endl;
	return 0;
}


//int main()
//{
//	int n; cin >> n;
//	vector<int>a;
//	for (int i = 0; i < n; i++)	//输入
//	{
//		int x; cin >> x;
//		a.push_back(x);
//	}
//
//	sort(a.begin(), a.end());	//排序
//
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = i + 1; j < n; j++)
//		{
//			if (a[i] == a[j]) a.erase(a.begin() + j), n--, j--;
//		}
//	}
//	
//	cout << n << endl;
//
//	for (int i = 0; i < n; i++)
//	{
//		cout << a[i] << ' ';
//	}
//	return 0;
//}