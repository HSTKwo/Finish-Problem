#pragma warning(disable:4996)
#include<iostream>
#include<algorithm>
#include<string>

using namespace std;


//int main()
//{
//	string a;
//	getline(cin, a);
//	for (int i = 0; a[i]; i++)
//	{
//		int cnt = 0;
//		if (a[i] == '6')
//		{
//			int j = i;
//			for (j; a[j] == '6'; j++)
//			{
//				cnt++;
//			}
//			if (cnt > 3 && cnt < 9)
//			{
//				a.erase(a.begin() + i, a.begin() + j);
//				a.insert(a.begin() + i, '9');
//			}
//			else if (cnt >= 9)
//			{
//				a.erase(a.begin() + i, a.begin() + j);
//
//				a.insert(a.begin() + i, '2');
//				a.insert(a.begin() + i + 1, '7');
//			}
//		}
//	}
//	cout << a << endl;	
//	return 0;
//}


//int main()
//{
//
//	cout << "PTA shi3 wo3 jing1 shen2 huan4 fa1 !" << endl;
//
//	return 0;
//}


//const int N = 1e4 + 10;
//char p[N][9];
//int nu[N];
//int main()
//{
//	int n, sum = 0;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> p[i] >> nu[i];
//		sum += nu[i];
//	}
//	sum = sum / n / 2;
//	int min = 99999;
//	int win = -1;
//	for (int i = 0; i < n; i++)
//	{
//		if (abs(sum - nu[i]) < min)
//		{
//			min = abs(sum - nu[i]);
//			win = i;
//		}
//	}
//	cout << sum << ' ' << p[win] << endl;
//	return 0;
//}




//int main()
//{
//	int pa, pb;
//	int a, b, c;
//	cin >> pa >> pb >> a >> b >> c;
//	int A = 0, B = 0;
//	if (a == 0)A++;
//	else B++;
//	if (b == 0)A++;
//	else B++;
//	if (c == 0)A++;
//	else B++;
//
//	if ((pa > pb && A >= 1) || A == 3)printf("The winner is A: %d + %d", pa, A);
//	else printf("The winner is B: %d + %d", pb, B);
//
//	return 0;
//}


//int main()
//{
//	int a, b;
//	cin >> a >> b;
//	for (int i = 1; i <= a + b; i++)cout << "Wang!";
//	return 0;
//}


//int main()
//{
//	double n, d;
//	cin >> n >> d;
//	printf("%.2f", n * d / 10.0);
//	return 0;
//}


//int main()
//{
//	int n, m, count = 0;
//	char c;
//	cin >> n >> m;
//	//abcdefghijklmnopqrstuvwxyz
//	int st[10] = { 0 };
//	int pos = pow(26, n) - m;
//	while (n--)
//	{
//		st[count++] = pos % 26;
//		pos /= 26;
//	}
//
//	for (int i = count - 1; i >= 0; i--)
//	{
//		cout << (c = 'a' + st[i]);
//	}
//	return 0;
//}



//int main()
//{
//	int n; cin >> n;
//	while(n--)
//	{
//		string nm; cin >> nm;
//		int h, m;
//		cin >> h >> m;
//		if ((h < 15 || h>20) || (m < 50 || m > 70))cout << nm << endl;
//	}
//	return 0;
//}




//int main()
//{
//	string s;
//	cin >> s;
//	cout << "Hello " << s << endl;
//	return 0;
//}


//int main()
//{
//	int n;
//	scanf("%d", &n);
//	char op[7];
//	scanf("%s", op);
//	int cnt = 0;
//
//	while (1)
//	{
//		if (strcmp(op, "ChuiZi") == 0 && cnt != n)
//		{
//			printf("Bu\n");
//			cnt++;
//		}
//		else if (strcmp(op, "JianDao") == 0 && cnt != n)
//		{
//			printf("ChuiZi\n");
//			cnt++;
//		}
//		else if (strcmp(op , "Bu")==0 && cnt != n)
//		{
//			printf("JianDao\n");
//			cnt++;
//		}
//		else if (cnt == n)
//		{
//			printf("%s\n", op);
//			cnt = 0;
//		}
//		scanf("%s", op);
//		if (strcmp(op, "End") == 0)break;
//	}
//
//	return 0;
//}



//int main()
//{
//	char d[11];
//	scanf("%s", d);
//	for (int i = 6; i <= 10; i++)printf("%c", d[i]);
//	printf("_");
//	for (int i = 0; i < 5; i++)printf("%c", d[i]);
//}


//const int N = 1e4 + 10;
//int main()
//{
//	int a[N];
//	for (int i = 0; i < N; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//
//	for (int i = 0; ; i++)
//	{
//		if (a[i] == 250)
//		{
//			printf("%d", i + 1);
//			break;
//		}
//	}
//
//
//	return 0;
//}




//const int N = 100;
//char p[N][10];
//
//int main()
//{
//	int i;
//	for (i = 0;; i++)
//	{
//		scanf("%s", p[i]);
//		if (p[i][0] == '.')break;
//	
//	}
//	if (i >= 14)printf("%s and %s are inviting you to dinner...\n", p[1], p[13]);
//	else if (i < 14 && i >= 2)printf("%s is the only one for you...\n", p[1]);
//	else printf("Momo... No one is for you ...\n");
//
//	return 0;
//}


//int n;
//int st[1000];
//
//int main()
//{
//	scanf("%d", &n);
//
//	while (n--)
//	{
//		int k;
//		scanf("%d", &k);
//		while (k--)
//		{
//			int fg;
//			scanf("%d", &fg);
//			st[fg]++;
//		}
//	}
//	int max = -1;
//
//	for (int i = 0; i <= 1000; i++)
//	{
//		if (st[i] >= st[max])max = i;
//	}
//	printf("%d %d", max, st[max]);
//
//	return 0;
//}



//int year, n;
//int main()
//{
//	scanf("%d%d", &year, &n);
//
//	for (int i = year; i <= 3020; i++)
//	{
//		char y[4] = { 0,0,0,0 };
//		if (i < 10)y[3] = i;
//		else if (i < 100 && i >= 10)y[2] = i / 10, y[3] = i % 10;
//		else if (i < 1000 && i >= 100)y[1] = i / 100, y[2] = i / 10 % 10, y[3] = i % 10;
//		else if (i >= 100)y[0] = i / 1000, y[1] = i / 100 % 10, y[2] = i / 10 % 10, y[3] = i % 10;
//		int cnt = 0; int st[10] = { 0 };
//		for (int i = 0; i < 4; i++)st[y[i]]++;
//		for (int i = 0; i < 10; i++)if (st[i] != 0)cnt++;
//
//		if(cnt==n)
//		{
//			printf("%d %c%c%c%c\n", i - year, y[0] + '0', y[1] + '0', y[2] + '0', y[3] + '0');
//			break;
//		}
//	}
//
//	return 0;
//}



//int len;
//char s;
//string a;
//
//int main()
//{
//	scanf("%d %c\n", &len, &s);
//	getline(cin, a);\
//	if (a.size() < len)a.insert(a.begin(), len - a.size(), s);
//	else a.erase(a.begin(), a.begin() + a.size() - len);
//	cout << a << endl;
//
//	return 0;
//}