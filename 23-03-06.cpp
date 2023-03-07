#pragma warning(disable:4996)
#include<iostream>
#include<algorithm>

using namespace std;



//01��������
//https://www.acwing.com/problem/content/2/

//const int N = 1010;
//int n, m;
//int v[N], w[N];
//int f[N];
//
//int main()
//{
//	scanf("%d%d", &n, &m);
//	for (int i = 1; i <= n; i++)scanf("%d%d", &v[i], &w[i]);
//
//	for (int i = 1; i <= n; i++)					//0����Ʒ������
//		for (int j = 0; j <= m; j++)		
//		{									
//			f[i][j] = f[i - 1][j];
//			if (j >= v[i])f[i][j] = max(f[i][j], f[i - 1][j - v[i]] + w[i]);
//		}
//	printf("%d", f[n][m]);
//	return 0;
//}

//int main()
//{
//	scanf("%d%d", &n, &m);
//	for (int i = 1; i <= n; i++)scanf("%d%d", &v[i], &w[i]);
//
//	for (int i = 1; i <= n; i++)			//��������Ϊ��������Ҫ�õ�i-1����Ʒ��f[j]
//		for (int j = m; j >= v[i]; j--)		//��ֹ��������һ���
//		{
//			if (j >= v[i])f[j] = max(f[j], f[j - v[i]] + w[i]);
//		}
//	printf("%d", f[m]);
//	return 0;
//}



//��ȫ��������
//https://www.acwing.com/problem/content/3/

//const int N = 1010;
//int n, m;
//int v[N], w[N];
//int f[N];
//
//int main()
//{
//	scanf("%d%d", &n, &m);
//	for (int i = 1; i <= n; i++)scanf("%d%d", &v[i], &w[i]);
//
//	//O(n^3) ��ʱ
//	//for (int i = 1; i <= n; i++)
//	//	for (int j = 0; j <= m; j++)
//	//		for (int k = 0; k * v[i] <= j; k++)
//	//			f[i][j] = max(f[i][j], f[i - 1][j - k * v[i]] + k * w[i]);
//	
//	////�Ż���ά
//	//for (int i = 1; i <= n; i++)
//	//	for (int j = 0; j <= m; j++)
//	//	{
//	//		f[i][j] = f[i - 1][j];
//	//		if (j >= v[i])f[i][j] = max(f[i][j], f[i][j - v[i]] + w[i]);
//	//	}
//
//	//�Ż�Ϊһά��
//	for (int i = 1; i <= n; i++)
//		for (int j = v[i]; j <= m; j++)
//			f[j] = max(f[j], f[j - v[i]] + w[i]);
//  
//	printf("%d", f[m]);
//
//	return 0;
//}




//���ر������� I
//https://www.acwing.com/problem/content/4/

//const int N = 110;
//int n, m;
//int v[N], w[N], s[N];
//int f[N][N];
//
//int main()
//{
//	scanf("%d%d", &n, &m);
//	for (int i = 1; i <= n; i++)scanf("%d%d%d", &v[i], &w[i], &s[i]);
//	//��������
//	for (int i = 1; i <= n; i++)
//		for (int j = 0; j <= m; j++)
//			for (int k = 0; k <= s[i] && k * w[i] < j; j++)
//				f[i][j] = max(f[i - 1][j], f[i - 1][j - v[i] * k] + k * w[i]);
//	printf("%d", f[n][m]);
//	return 0;
//}



//���ر������� II
//https://www.acwing.com/problem/content/5/

//const int N = 25000, M = 2010;
//int n, m;
//int v[N], w[N];
//int f[N];
//
//int main()
//{
//	scanf("%d%d", &n, &m);
////�������Ż�  ת��Ϊ01��������
//int cnt = 0;						//��ʾ����ı��
//for (int i = 1; i <= n; i++)
//{
//	int a, b, s;
//	scanf("%d%%d%d", &a, &b, &s);
//	int k = 1;		//��1��ʼ
//	while (k <= s)
//	{
//		cnt++;
//		v[cnt] = a * k;
//		w[cnt] = b * k;
//		s -= k;
//		k *= 2;
//	}
//	if (s > 0);
//	{
//		cnt++;
//		v[cnt] = a * s;
//		w[cnt] = b * s;
//	}
//}
////01����
//n = cnt;
//for (int i = 1; i <= n; i++)
//	for (int j = m; j >=v[i]; j--)
//		f[j] = max(f[j], f[j - v[i]] + w[i]);
//	
//	printf("%d", f[n]);
//	return 0;
//}




// ���鱳������
// https://www.acwing.com/problem/content/9/
//
//const int N = 110;
//int n, m;
//int s[N], v[N][N], w[N][N];
//int f[N];
//
//int main()
//{
//	scanf("%d%d", &n, &m);
//	for (int i = 1; i <= n; i++)
//	{
//		scanf("%d", &s[i]);
//		for (int j = 0; j < s[i]; j++)
//		{
//			printf("%d%d", &v[i][j], &w[i][j]);
//		}
//	}
//
//	for (int i = 1; i <= n; i++)
//		for (int j = m; j >= 0; j--)
//			for (int k = 0; k < s[i]; k++)
//				if (j >= v[i][k])
//					f[j] = max(f[j], f[j - v[i][k]] + w[i][k]);
//
//	printf("%d", f[m]);
//
//	return 0;
//}


// ����������
//https://www.acwing.com/problem/content/900/

//const int N = 510, INF = 1e9;
//int a[N][N];
//int f[N][N];
//int n;
//
//int main()
//{
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++)
//		for (int j = 1; j <= i; j++)
//			scanf("%d", &a[i][j]);
//
//	for (int i = 0; i <= n + 1; i++)
//		for (int j = 0; j <= i + 1; j++)
//			f[i][j] = -INF;
//
//	f[1][1] = a[1][1];
//	for (int i = 2; i <= n; i++)
//		for (int j = 1; j <= i; j++)
//			f[i][j] = max(f[i - 1][j - 1] + a[i][j], f[i - 1][j] + a[i][j]);
//
//	int ans = 0;
//	for (int j = 1; j <= n; j++)
//		ans = max(ans, f[n][j]);
//
//	printf("%d",ans);
//	return 0;
//}



