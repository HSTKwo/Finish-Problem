#pragma warning(disable:4996)

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;



//最长连续不重复子序列
//https://www.acwing.com/problem/content/801/

//const int N = 1e5 + 10;
//int n, a[N], ht[N];
//
//
//int main()
//{
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)scanf("%d", &a[i]);
//
//	int j = 0, ans = 0;
//	for (int i = 0; i < n; i++)
//	{
//		ht[a[i]]++;
//		while (ht[a[i]] > 1)
//		{
//			ht[a[j]]--;
//			j++;
//		}
//		ans = max(ans, i - j + 1);
//	}
//
//	cout << ans << endl;
//
//	return 0;
//}



//数组元素的目标和
//https://www.acwing.com/problem/content/802/

//const int N = 1e5 + 10;
//int a[N], b[N];
//int n, m, x;
//
//int main()
//{
//	scanf("%d%d%d", &n, &m, &x);
//
//	for (int i = 0; i < n; i++)scanf("%d", &a[i]);
//	for (int i = 0; i < m; i++)scanf("%d", &b[i]);
//
//	int l = 0, r = m - 1;
//	while (l < n && r >= 0)
//	{
//		if (a[l] + b[r] > x)r--;
//		else if (a[l] + b[r] < x)l++;
//		else break;
//	}
//
//	printf("%d %d", l, r);
//	return 0;
//}



//判断子序列
//https://www.acwing.com/problem/content/2818/

//const int N = 1e5 + 10;
//int a[N], b[N];
//int n, m;
//
//int main()
//{
//	scanf("%d%d", &n, &m);
//	for (int i = 0; i < n; i++)scanf("%d", &a[i]);
//	for (int i = 0; i < m; i++)scanf("%d", &b[i]);
//
//	int i = 0, j = 0;
//	while (i < n)
//	{
//		if (a[i] == b[j])i++, j++;
//		else j++;
//		if (j >= m)break;
//	}
//	if (i == n)printf("Yes");
//	else printf("No");
//	return 0;
//}



//二进制中1的个数
//https://www.acwing.com/problem/content/803/

//const int N = 1e5 + 10;
//int a[N], b[N];
//int n;
//
//int main()
//{
//	scanf("%d", &n);
//
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &a[i]);
//
//		int cnt = 0, num = a[i];
//		do{
//			if (num & 1 == 1)cnt++;
//		} while (num >>= 1);
//
//		b[i] = cnt;
//	}
//	for (int i = 0; i < n; i++)printf("%d ", b[i]);
//	return 0;
//}



//区间和
//https://www.acwing.com/problem/content/804/

//typedef pair<int, int> PII;
//vector<PII>add, query;
//vector<int>alls;
//const int N = 3e5 + 10;
//int a[N], s[N], n, m;
//
//
//int find(int x)
//{
//	int l = 0,r = alls.size() - 1;
//	while (l < r)
//	{
//		int mid = l + r >> 1;
//		if (alls[mid] >= x)r = mid;
//		else l = mid + 1;
//	}
//	return l + 1;
//}
//
//int main()
//{
//	scanf("%d%d", &n, &m);
//	for (int i = 0; i < n; i++)
//	{
//		int x, c;
//		scanf("%d%d", &x, &c);
//		add.push_back({ x,c });
//		alls.push_back(x);
//	}
//
//	for (int i = 0; i < m; i++)
//	{
//		int l, r;
//		scanf("%d%d", &l, &r);
//		query.push_back({ l,r });
//		alls.push_back(l);
//		alls.push_back(r);
//	}
//
//	sort(alls.begin(), alls.end());
//	//去重
//	alls.erase(unique(alls.begin(), alls.end()), alls.end());
//	//处理x
//	for (auto item : add)
//	{
//		int x = find(item.first);
//		a[x] += item.second;
//	}
//	//前缀和
//	for (int i = 1; i <= alls.size(); i++) s[i] = s[i - 1] + a[i];
//	//进行询问
//	for (auto item : query)
//	{
//		int l, r;
//		l = find(item.first), r = find(item.second);
//		printf("%d\n", s[r] - s[l - 1]);
//	}
//	return 0;
//}



//区间合并
//https://www.acwing.com/problem/content/805/

//typedef pair<int, int>PII;
//vector<PII>seg, ans;
//int n;
//
//
//void merge(vector<PII>& seg1)
//{
//	vector<PII>ans;
//	sort(seg1.begin(), seg1.end());		//左端点排序
//	int st = -2e9, ed = -2e9;
//	for (auto item : seg1)
//	{
//		if (item.first > ed)
//		{
//			if (st != -2e9)ans.push_back({ st,ed });
//			st = item.first, ed = item.second;	
//		}
//		else if (item.first <= ed)
//		{
//			ed = max(ed, item.second);
//		}
//	}
//	ans.push_back({ st,ed });
//	seg1 = ans;
//}
//
//int main()
//{
//	scanf("%d", &n);
//	while (n--)
//	{
//		int l, r;
//		scanf("%d%d", &l, &r);
//		seg.push_back({ l,r });
//	}
//
//	merge(seg);
//
//	printf("%d", seg.size());
//
//	return 0;
//}



//单链表
//https://www.acwing.com/problem/content/description/828/

const int N = 1e5 + 10;
int e[N], ne[N], head, idx, m;

void insert(int k,int x)
{
	e[idx] = x, ne[idx] = ne[k], ne[k] = idx++;
}

void insert(int x)
{
	e[idx] = x, ne[idx] = head, head = idx++;
}

void erase(int k)
{
	ne[k] = ne[ne[k]];
}

void init()
{
	head = -1, idx = 1;
}

int main()
{
	scanf("%d", &m);

	init();
	while (m--)
	{
		int k, x;
		char op;
		cin >> op;
		if (op == 'H')
		{
			scanf("%d", &x);
			insert(x);
		}
		if (op == 'D')
		{
			scanf("%d", &k);
			//if (!k)head = ne[head];
			erase(k);
			
		}
		if (op == 'I')
		{
			scanf("%d%d", &k, &x);
			insert(k, x);
		}
	}

	for (int i = head; i != -1; i = ne[i])printf("%d ", e[i]);

	return 0;
}



