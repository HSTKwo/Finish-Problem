#pragma warning(disable:4996)

#include<iostream>
#include<algorithm>

using namespace std;

//����Ե�����
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
//			cnt += mid - l + 1;		//��������ԣ���벿��ȫ��
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



//�鲢����
//https://www.acwing.com/problem/content/789/

//const int N = 1e5 + 10;
//int n, q[N], tmp[N];
//
//void msort(int l, int r)
//{
//	if (l >= r)return;
//	int mid = l + r >> 1;
//	//�ֽ�
//	msort(l, mid), msort(mid + 1, r);
//	//�ϲ�
//	int k = 1, i = l, j = mid + 1;
//	while (i <= mid && j <= r)
//	{
//		if (q[i] < q[j])tmp[k++] = q[i++];
//		else tmp[k++] = q[j++];
//	}
//	while (i <= mid)tmp[k++] = q[i++];
//	while (j <= r)tmp[k++] = q[j++];
//	//�Ż�����
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

//��k����
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



//��������
//

//const int N = 1e5 + 10;
//int n;
//int a[N];
//
//void qsort(int l, int r)
//{
//	if (l >= r)return;
//	//�ֽ��
//	int x = a[l + r >> 1];
//	//ָ��
//	int i = l - 1, j = r + 1;
//
//	while (i < j)
//	{
//		do i++; while (a[i] < x);
//		do j--; while (a[j] > x);
//		if (i < j)swap(a[i], a[j]);
//	}
//
//	//������������
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