#pragma warning(disable:4996)


#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

//const int N = 1e5 + 10;
//int flagr[N], flagc[N];
//
//int main()
//{
//	int n, m, q;
//	cin >> n >> m >> q;
//	int ans = n * m;
//	int r = 0, c = 0;
//
//	while (q--)
//	{
//		int op, num;
//		cin >> op >> num;
//
//		if ((op == 0 && flagr[num] == 1) || (op == 1 && flagc[num] == 1))continue;
//		if (op == 0)
//		{
//			r++;
//			flagr[num] = 1;
//		}
//		else
//		{
//			c++;
//			flagc[num] = 1;
//		}
//	}
//	ans = ans - r * m - c * n + r * c;
//
//	cout << ans << endl;
//	return 0;
//}



//int main()
//{
//	string s1, s2;
//	string a1, a2;
//	cin >> a1 >> a2;
//
//	for (int i = 1; i < a1.size(); i++)
//	{
//		if (a1[i] % 2 == a1[i - 1] % 2) 
//		{
//			s1 += max(a1[i], a1[i - 1]);
//		}
//	}
//
//	for (int i = 1; i < a2.size(); i++)
//	{
//		if (a2[i] % 2 == a2[i - 1] % 2)
//		{
//			s2 += max(a2[i], a2[i - 1]);
//		}
//	}
//
//	if (s1 == s2)cout << s1;
//	else cout << s1 << endl << s2;
//
//	return 0;
//}


//int main()
//{
//	int arr[7];
//	int st[7][7] = { 0 };
//	for (int i = 1; i <= 6; i++)
//	{
//		int num; cin >> num;
//		st[i][num] = 1;
//		arr[i] = num;
//	}
//	int n;
//	cin >> n;
//	while (n--)
//	{
//		for (int i = 1; i <= 6; i++)
//		{
//			for (int j = 6; j >= 1; j--)
//			{
//				if (st[i][j] == 0)
//				{
//					arr[i] = j;
//					st[i][j] = 1;
//					break;
//				}
//			}
//
//		}
//	}
//
//
//	for (int i = 1; i <= 6; i++)
//	{
//		cout << arr[i];
//		if (i != 6)cout << " ";
//	}
//
//	return 0;
//}

//int main()
//{
//	int a, b;
//	cin >> a >> b;
//	int num = a + b;
//	int ans = 1;
//	while (num != 0)
//	{
//		ans *= num;
//		num--;
//	}
//	cout << ans;
//
//	return 0;
//}




//int main()
//{
//	int l1, l2, a, b;
//	cin >> l1 >> l2 >> a >> b;
//	if (a < l1 && b >= l2)cout << a << "-Y " << b << "-Y" << endl, cout << "qing 2 zhao gu hao 1";
//	else if (b < l1 && a >= l2) cout << a << "-Y " << b << "-Y" << endl, cout << "qing 1 zhao gu hao 2";
//	else if (a >= l1 && b >= l1)cout << a << "-Y " << b << "-Y" << endl, cout << "huan ying ru guan";
//	else if (a < l1 && b < l1)cout << a << "-N " << b << "-N" << endl, cout << "zhang da zai lai ba";
//	else if (a < l1 && b >= l1 && b < l2)cout << a << "-N " << b << "-Y" << endl, cout << "2: huan ying ru guan";
//	else if (b < l1 && a >= l1 && a < l2)cout << a << "-Y " << b << "-N" << endl, cout << "1: huan ying ru guan";
//
//
//	return 0;
//}


//int main()
//{
//	int n, v;
//	cin >> n >> v;
//	cout << n / v << endl;
//
//	return 0;
//}



//int main()
//{
//	cout << "I'm gonna win! Today!" << endl;
//	cout << "2022-04-24" << endl;
//
//
//	return 0;
//}



//const int N = 1e3 + 10;
//int a1, a2, n;
//int arr[N];
//
//int main()
//{
//	cin >> a1 >> a2 >> n;
//	arr[0] = a1, arr[1] = a2;
//	int b = 2;
//	for (int i = 0; i < n; i++)
//	{
//		if (arr[i] * arr[i + 1] < 10)
//		{
//			arr[b] = arr[i] * arr[i + 1];
//			b++;
//		}
//		else
//		{
//			arr[b] = arr[i] * arr[i + 1] / 10;
//			arr[b + 1] = arr[i] * arr[i + 1] % 10;
//			b += 2;
//		}
//	}
//
//	for (int i = 0; i < n; i++)cout << arr[i] << ' ';
//
//	return 0;
//}


//const int N = 2e4 + 10;
//
//int main()
//{
//	int n;
//	cin >> n;
//	int arr[N];
//	for (int i = 0; i < n; i++)cin >> arr[i];
//	int min = 0x3f3f3f3f, max = 0;
//	for (int i = 0; i < n; i++)
//	{
//		if (arr[i] > max)max = arr[i];
//		if (arr[i] < min)min = arr[i];
//	}
//	int minc = 0, maxc = 0;
//	for (int i = 1; i < n; i++)
//	{
//		if (arr[i] == min)minc++;
//		if (arr[i] == max)maxc++;
//	}
//
//	cout << min << ' ' << minc << endl << max << ' ' << maxc;
//
//	return 0;
//}



//int n, m;
//string p1 = "qiandao", p2 = "easy";
//
//bool find(string s)
//{
//	for (int i = 0; i <= s.length() - 7; i++)
//	{
//		if (s.substr(i, 7) == p1) return true;
//	}
//	for (int i = 0; i <= s.length() - 4; i++)
//	{
//		if (s.substr(i, 4) == p2) return true;
//	}
//	return false;
//}
//
//int st[30];
//
//int main()
//{
//	cin >> n >> m;
//	getchar();
//	int cnt = 0, fns = 0;
//	while (n--)
//	{
//		string s;
//		getline(cin, s);
//		cnt++;
//		if (!find(s))fns++;
//		if (!find(s) && fns == m + 1)	cout << s << endl;
//		
//	}
//	if (m >= fns)cout << "Wo AK le" << endl;
//	return 0;
//}



//int main()
//{
//	int arr[24];
//	for (int i = 0; i < 24; i++)
//		cin >> arr[i];
//	
//	while (1)
//	{
//		int q;
//		cin >> q;
//		if (q == -1)break;
//		cout << arr[q];
//		if (arr[q] > 50)cout << " Yes" << endl;
//		else cout << " No" << endl;
//	}
//
//	return 0;
//}



//int main()
//{
//	int n;
//	float p;
//	cin >> n >> p;
//	while (n--)
//	{
//		float np;
//		cin >> np;
//		if (np < p)
//			printf("On Sale! %.1f", np);
//	}
//
//	return 0;
//}




//int main()
//{
//	string d;
//	cin >> d;
//	int y = 0, m = 0;
//	if (d.length() == 6)
//		d.insert(d.begin() + 4, '-');	
//	else
//	{
//		for (int i = 0; i < 2; i++)
//		{
//			y = y * 10 + d[i] - '0';
//		}
//		for (int i = 2; i < 4; i++)
//		{
//			m = m * 10 + d[i] - '0';
//
//		}
//		if (y < 22)d.insert(0, "20");
//		else d.insert(0, "19");
//		if (m < 10)d.insert(d.begin() + 4, '0');
//		d.insert(d.begin() + 4, '-');
//	}
//	cout << d;
//
//	return 0;
//}