#pragma warning(disable:4996)

#include<iostream>
#include<algorithm>

using namespace std;

//逆序对的数量
//https://www.acwing.com/problem/content/790/
//
//const int N = 1e5 + 10;
//int n, q[N], tmp[N], cnt;
//
//void msort(int l,int r)
//{
//	if (l >= r)return;
//	int mid = l + r >> 1;
//	msort(l, mid), msort(mid + 1, r);
//
//	int k = 1;
//	int i = l, j = mid + 1;
//	while (i <= mid && j <= r)
//	{
//		if (q[i] <= q[j])tmp[k++] = q[i++];
//		else
//		{
//			tmp[k++] = q[j++];
//			cnt += mid - l + 1;		//出现逆序对，左半部分全是
//		}
//	}
//	while (i <= mid)tmp[k++] = q[i++];
//	while (j <= r)tmp[k++] = q[j++];
//	for (int i = l, k = 1; i <= r; i++, k++)q[i] = tmp[k];
//}


//int main()
//{
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++)scanf("%d", &q[i]);
//	msort(1, n);
//	cout << cnt << endl;
//	return 0;
//}



//归并排序
//https://www.acwing.com/problem/content/789/

//const int N = 1e5 + 10;
//int n, q[N], tmp[N];
//
//void msort(int l, int r)
//{
//	if (l >= r)return;
//	int mid = l + r >> 1;
//	//分解
//	msort(l, mid), msort(mid + 1, r);
//	//合并
//	int k = 1, i = l, j = mid + 1;
//	while (i <= mid && j <= r)
//	{
//		if (q[i] < q[j])tmp[k++] = q[i++];
//		else tmp[k++] = q[j++];
//	}
//	while (i <= mid)tmp[k++] = q[i++];
//	while (j <= r)tmp[k++] = q[j++];
//	//放回数组
//	for (int i = l, k = 1; i <= r; i++, k++)q[i] = tmp[k];
//}
//
//int main()
//{
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++)scanf("%d", &q[i]);
//	msort(1, n);
//	for (int i = 1; i <= n; i++)printf("%d ", q[i]);
//	return 0;
//}
//

//第k个数
//https://www.acwing.com/problem/content/788/

//const int N = 1e5 + 10;
//int n, m;
//int q[N];
//
//void qsort(int l, int r)
//{
//	if (l >= r)return;
//	int x = q[l + r >> 1];
//	int i = l - 1, j = r + 1;
//	while (i < j)
//	{
//		do i++; while (q[i] < x);
//		do j--; while (q[j] > x);
//		if (i < j)swap(q[i], q[j]);
//	}
//	qsort(l, j);
//	qsort(j + 1, r);
//}
//
//int main()
//{
//	scanf("%d%d", &n, &m);
//	for (int i = 1; i <= n; i++)scanf("%d", &q[i]);
//	qsort(1, n);
//	cout << q[m] << endl;
//	return 0;
//}



//快速排序
//

//const int N = 1e5 + 10;
//int n;
//int a[N];
//
//void qsort(int l, int r)
//{
//	if (l >= r)return;
//	//分界点
//	int x = a[l + r >> 1];
//	//指针
//	int i = l - 1, j = r + 1;
//
//	while (i < j)
//	{
//		do i++; while (a[i] < x);
//		do j--; while (a[j] > x);
//		if (i < j)swap(a[i], a[j]);
//	}
//
//	//处理左右两边
//	qsort(l, j);
//	qsort(j + 1, r);
//}
//
//int main()
//{
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++)scanf("%d", &a[i]);
//	qsort(1, n);
//	for (int i = 1; i <= n; i++)printf("%d ", a[i]);
//
//	return 0;
//}