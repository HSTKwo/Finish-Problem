#pragma warning(disable:4996)

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


//高精度加法
//https://www.acwing.com/problem/content/793/

//vector<int>add(vector<int>& A, vector<int>& B)
//{
//	if (A.size() < B.size())return add(B, A);
//
//	vector<int>C;
//	int t = 0;
//	for (int i = 0; i < A.size() || t; i++)
//	{
//		if (i < A.size())t += A[i];
//		if (i < B.size())t += B[i];
//		C.push_back(t % 10);
//		t /= 10;
//	}
//
//	return C;
//}
//
//
//int main()
//{
//	string a, b;
//	vector<int>A, B;
//	cin >> a >> b;
//	for (int i = a.size() - 1; i >= 0; i--)A.push_back(a[i] - '0');
//	for (int i = b.size() - 1; i >= 0; i--)B.push_back(b[i] - '0');
//
//	auto C = add(A, B);
//
//	for (int i = C.size() - 1; i >= 0; i--)printf("%d", C[i]);
//
//	return 0;
//}




//高精度减法
//https://www.acwing.com/problem/content/794/

//bool cmp(vector<int>& A, vector<int>& B)
//{
//	if (A.size() != B.size())return A.size() > B.size();
//	for (int i = A.size() - 1; i >= 0; i--)
//	{
//		if (A[i] != B[i])return A[i] > B[i];
//	}
//
//	return 1;
//}
//
//vector<int>sub(vector<int>& A, vector<int>& B)
//{
//	vector<int>C;
//	int t = 0;
//
//	for (int i = 0; i < A.size(); i++)
//	{
//		t = A[i] - t;
//		if (i < B.size())t -= B[i];
//		C.push_back((t + 10) % 10);
//		if (t < 0)t = 1;		//说明结位
//		else t = 0;
//	}
//
//	while (C.back() == 0 && C.size() > 1)C.pop_back();
//
//	return C;
//}
//
//int main()
//{
//	string a, b;
//	vector<int>A, B;
//	cin >> a >> b;
//	for (int i = a.size() - 1; i >= 0; i--)A.push_back(a[i] - '0');
//	for (int i = b.size() - 1; i >= 0; i--)B.push_back(b[i] - '0');
//
//	if (cmp(A, B))
//	{
//		auto C = sub(A, B);
//		for (int i = C.size() - 1; i >= 0; i--)printf("%d", C[i]);
//	}
//	else
//	{
//		auto C = sub(B, A);
//		printf("-");
//		for (int i = C.size() - 1; i >= 0; i--)printf("%d", C[i]);
//	}
//
//	return 0;
//}




//高精度乘法
//https://www.acwing.com/problem/content/description/795/

//vector<int>mul(vector<int>& A, int B)
//{
//	vector<int>C;
//	int t = 0;
//	for (int i = 0; i < A.size() || t; i++)
//	{
//		if (i < A.size())t += A[i] * B;
//		C.push_back(t % 10);
//		t /= 10;
//	}
//
//	while (C.size() > 1 && C.back() == 0)C.pop_back();
//
//	return C;
//}
//
//
//int main()
//{
//	string a;
//	int B;
//	vector<int>A;
//	cin >> a >> B;
//	for (int i = a.size() - 1; i >= 0; i--)A.push_back(a[i] - '0');
//
//	auto C = mul(A, B);
//
//	for (int i = C.size() - 1; i >= 0; i--)printf("%d", C[i]);
//
//	return 0;
//}



//高精度除法
//https://www.acwing.com/problem/content/796/


//vector<int>div(vector<int>& A, int& B,int &r)
//{
//	vector<int>C;
//	r = 0;
//	for (int i = A.size() - 1; i >= 0; i--)
//	{
//		r = r * 10 + A[i];
//		C.push_back(r / B);
//		r %= B;
//	}
//
//	reverse(C.begin(), C.end());
//
//	while (C.size() > 1 && C.back() == 0)C.pop_back();
//
//	return C;
//}
//
//int main()
//{
//	string a; int B; vector<int>A;
//	cin >> a >> B;
//	for (int i = a.size() - 1; i >= 0; i--)A.push_back(a[i] - '0');
//
//	int r;
//	auto C = div(A, B, r);
//
//	for (int i = C.size() - 1; i >= 0; i--)printf("%d", C[i]);
//	cout << endl << r << endl;
//
//	return 0;
//}



//前缀和
//https://www.acwing.com/problem/content/description/797/

//int n, m;
//const int N = 100010;
//int a[N], s[N];
//
//int main()
//{
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++)scanf("%d", &a[i]),s[i] = s[i - 1] + a[i];
//
//	while (m--)
//	{
//		int l, r;
//		cin >> l >> r;
//		cout << s[r] - s[l - 1] << endl;
//	}
//
//	return 0;
//}


//子矩阵的和
//https://www.acwing.com/problem/content/798/


//
//int n, m, q;
//const int N = 1010;
//int a[N][N], s[N][N];
//
//
//int mian()
//{
//	scanf("%d%d%d", &n, &m, &q);
//	for (int i = 1; i <= n; i++)
//		for (int j = 1; j <= m; j++)
//		{
//			scanf("%d", &a[i][j]);
//			s[i][j] = s[i - 1][j] + s[i][j - 1] - s[i - 1][j - 1] + a[i][j];
//		}
//
//	while (q--)
//	{
//		int x1, y1, x2, y2;
//		scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
//		printf("%d\n", s[x2][y2] - s[x1 - 1][y2] - s[x2][y1 - 1] + s[x1 - 1][y1 - 1]);
//	}
//	return 0;
//}



//差分
//https://www.acwing.com/problem/content/799/


//int n, m;
//const int N = 100010;
//int a[N], b[N];
//
//void insert(int l, int r, int c)
//{
//	b[l] += c;
//	b[r + 1] -= c;
//}
//
//int main()
//{
//	scanf("%d%d", &n, &m);
//	for (int i = 1; i <= n; i++)scanf("%d", &a[i]), insert(i, i, a[i]);
//
//	while (m--)
//	{
//		int l, r, c;
//		scanf("%d%d%d", &l, &r, &c);
//		insert(l, r, c);
//	}
//
//	for (int i = 1; i <= n; i++)b[i] += b[i - 1];
//	for (int i = 1; i <= n; i++)printf("%d ", b[i]);
//
//	return 0;
//}




//差分矩阵
//https://www.acwing.com/problem/content/800/

//int n, m, q;
//const int N = 1010;
//int a[N][N], b[N][N];
//
//void insert(int x1, int y1, int x2, int y2, int c)
//{
//	b[x1][y1] += c;
//	b[x2 + 1][y1] -= c;
//	b[x1][y2 + 1] -= c;
//	b[x2 + 1][y2 + 1] += c;
//} 
//
//int main()
//{
//	scanf("%d%d%d", &n, &m, &q);
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= m; j++)
//		{
//			scanf("%d", &a[i][j]);
//			insert(i, j, i, j, a[i][j]);
//		}
//	}
//
//	while (q--)
//	{
//		int x1, y1, x2, y2, c;
//		scanf("%d%d%d%d%d", &x1, &y1, &x2, &y2, &c);
//		insert(x1, y1, x2, y2, c);
//	}
//
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= m; j++)
//		{
//			b[i][j] += b[i - 1][j] + b[i][j - 1] - b[i - 1][j - 1];
//			printf("%d", b[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}
