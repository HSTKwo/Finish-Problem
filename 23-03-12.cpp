#pragma warning(disable:4996)
#include<cstring>
#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

//int a[3][3];
//int p[19] = { 10000,36,720,360,80,252,108,72,54,180,72,180,119,36,306,1080,144,1800,3600 };
//int st[10];
//
//int main()
//{
//	int x1, y1;
//	for (int i = 0; i < 3; i++)
//		for (int j = 0; j < 3; j++)
//		{
//			int number; cin >> number;
//			if (number == 0)
//			{
//				x1 = i, y1 = j;
//			}
//			a[i][j]=number;
//			st[number] = 1;
//		}
//	int n = 3;
//	while (n--)
//	{
//		int x, y;
//		cin >> x >> y;
//		cout << a[x - 1][y - 1] << endl;;
//	}
//
//	for (int i = 1; i < 10; i++)
//		if (st[i] != 1)
//		{
//			a[x1][y1] = i;
//		}
//		
//
//	int num; cin >> num;
//	int sum = 0;
//	if (num == 1) sum = a[0][0] + a[0][1] + a[0][2];
//	if (num == 2) sum = a[1][0] + a[1][1] + a[1][2];
//	if (num == 3) sum = a[2][0] + a[2][1] + a[2][2];
//	if (num == 4) sum = a[0][0] + a[1][0] + a[2][0];
//	if (num == 5) sum = a[0][1] + a[1][1] + a[2][1];
//	if (num == 6) sum = a[0][2] + a[1][2] + a[2][2];
//	if (num == 7) sum = a[0][0] + a[1][1] + a[2][2];
//	if (num == 8) sum = a[0][2] + a[1][1] + a[2][0];
//
//	cout << p[sum - 6] << endl;;
//
//	return 0;
//}



//char a[30];
//
//int main()
//{
//	int n, m;
//	cin >> n >> m;
//	while (m--)
//	{
//		cin >> a;
//		int ans = 1;
//		for (int i = 0; i < n; i++)
//		{
//			if (a[i] == 'n')ans *= 2;
//			else ans = ans * 2 - 1;
//		}
//		cout << ans << endl;
//	}
//
//
//	return 0;
//}




//string s;
//string p = "chi1 huo3 guo1";
//
//bool find()
//{
//	int len = s.length();
//	for (int i = 0; i <= len - 14 + 1; i++)
//	{
//		if (p == s.substr(i, 14))return true;
//	}
//	return false;
//
//}
//
//
//int main()
//{
//	int cnt = 0;
//	int first = 0x3f3f3f3f, sum = 0;
//	bool fg = true;
//	do{
//		getline(cin, s);
//		if (s == ".")fg = false;
//		else
//		{
//			cnt++;
//			if (find())
//			{
//				first = min(first, cnt);
//				sum++;
//			}
//		}
//
//	} while (fg);
//
//	
//	cout << cnt << endl;
//	if (sum == 0)cout << "-_-#" << endl;
//	else cout << first << ' ' << sum << endl;
//
//	return 0;
//}


//int main()
//{
//	int n, k, m;
//	cin >> n >> k >> m;
//	cout << (n - k * m) << endl;
//
//
//	return 0;
//}



//int main()
//{
//
//
//	cout << "To iterate is human, to recurse divine." << endl;
//
//	return 0;
//}




//int main()
//{
//	int a[4], std, s, st[4] = { 0 };
//	cin >> a[0] >> a[1] >> a[2] >> a[3] >> std >> s;
//
//	int max = 0;
//	for (int i = 0; i < 4; i++)
//	{
//		if (a[i] >= std)st[i] = 1;
//		if (a[i] > max)max = a[i];
//
//	}
//	int maxc = 0;
//	int check;
//	for (int i = 0; i < 4; i++)
//	{
//		if (max - a[i] > maxc)
//		{
//			maxc = max - a[i];
//			check = i + 1;
//		}
//	}
//
//	int cnt = 0;
//
//	for (int i = 0; i < 4; i++)
//	{
//		if (st[i] == 1)cnt++;
//		else check = i + 1;
//	}
//	if (maxc <= s && cnt == 4)cout << "Normal" << endl;
//	else if ((maxc > s && cnt == 4) || (cnt == 3 && maxc <= s))cout << "Warning: please check #" << check << "!" << endl;
//	else cout << "Warning: please check all the tires!" << endl;
//
//	return 0;
//}




//double a[1010];
//
//int main()
//{
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++)cin >> a[i];
//
//	double sum = 0;
//	for (int i = 0; i < n; i++)sum += 1.0 / a[i];
//	sum /= n;
//
//	printf("%.2f", 1.0 / sum);
//
//	return 0;
//}



//int main()
//{
//	float a, fg, b;
//	cin >> a >> fg >> b;
//	if (fg == 0)
//	{
//		float ans;
//		ans = a * 2.455;
//		printf("%.2f ", ans);
//		if (ans < b)cout << "^_^" << endl;
//		else cout << "T_T" << endl;
//	}
//	if (fg == 1)
//	{
//		float ans;
//		ans = a * 1.26;
//		printf("%.2f ", ans);
//		if (ans < b)cout << "^_^" << endl;
//		else cout << "T_T" << endl;
//	}
//
//	return 0;
//}


//int main()
//{
//	int l, w, h;
//	cin >> l >> w >> h;
//	cout << l * w * h << endl;
//	return 0;
//}



//int main()
//{
//
//	cout << "Talk is cheap. Show me the code." << endl;
//
//	return 0;
//}



//int main()
//{
//	int n;
//	cin >> n;
//
//	while(n--)
//	{
//		int sex, h, w;
//		cin >> sex >> h >> w;
//		if (sex == 1)
//		{
//			if (h > 130)cout << "ni li hai! ";
//			else if (h < 130)cout << "duo chi yu! ";
//			else cout << "wan mei! ";
//			if (w > 27)cout << "shao chi rou!";
//			else if (w < 27)cout << "duo chi rou!";
//			else cout << "wan mei!";
//		}
//		else
//		{
//			if (h > 129)cout << "ni li hai! ";
//			else if (h < 129)cout << "duo chi yu! ";
//			else cout << "wan mei! ";
//			if (w > 25)cout << "shao chi rou!";
//			else if (w < 25)cout << "duo chi rou!";
//			else cout << "wan mei!";
//		}
//	}
//	return 0;
//}



//int main()
//{
//	int n;
//	cin >> n;
//	while (n--)
//	{
//		int num;
//		cin >> num;
//		int s1 = 0, s2 = 0;
//		for (int i = 1; i <= 3; i++)
//		{
//			s1 += num % 10;
//			num /= 10;
//		}
//		for (int i = 1; i <= 3; i++)
//		{
//			s2 += num % 10;
//			num /= 10;
//		}
//		if (s1 == s2)cout << "You are lucky!" << endl;
//		else cout << "Wish you good luck." << endl;
//	}
//	return 0;
//}



//int main()
//{
//	float a, b;
//	cin >> a >> b;
//	float res = a / b / b;
//	printf("%.1f\n", res);
//	if (res > 25)cout << "PANG" << endl;
//	else cout << "Hai Xing" << endl;
//
//
//	return 0;
//}




//int main()
//{
//
//	int x, y;
//	cin >> x >> y;
//	cout << (5000 - (x * y / 2) - (100 - y)*(100 - x) / 2 - (100 - x) * y);
//
//	return 0;
//}

//const int N = 1e6 + 10;
//int a[N];
//int n;
//
//
//
//int main()
//{
//	cin >> n;
//	for (int i = 1; i <= n; i++)cin >> a[i];
//	int k;
//	cin >> k;
//	for (int i = 1; i <= n; i++)
//	{
//		int min = 0x3f3f3f3f;
//		for (int j = i - k; j <= i + k; j++)
//		{
//			if ((j >= 1 && j <= n) && a[j] < min)min = a[j];
//		}
//		cout << min<<' ';
//	}
//
//	return 0;
//}




//int main()
//{
//	int year = 1900;
//	
//	int cnt = 0;
//	int n = 28;
//	int arr[12] = { 31,n,31,30,31,30,31,31,30,31,30,31 };
//
//	for (int i = year; i <= 9999; i++)
//	{
//		if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))n = 29;
//		else n = 28;
//		int month = 1;
//		for (int j = month; j <= 12; j++)
//		{
//			int day = 1;
//			for (int k = day; k <= arr[j - 1]; k++)
//			{
//				int s1 = 0, s2 = 0;
//				int temp1 = i;
//				while (temp1)
//				{
//					s1 += temp1 % 10;
//					temp1 /= 10;
//				}
//				int temp2 = j, temp3 = k;
//				while (temp2)
//				{
//					s2 += temp2 % 10;
//					temp2 /= 10;
//				}
//				while (temp3)
//				{
//					s2 += temp3 % 10;
//					temp3 /= 10;
//				}
//				if (s2 == s1)cnt++;
//			}
//		}
//	}
//
//
//	cout << cnt;
//	return 0;
//}




//int st[30][30];
//
//int main()
//{
//	int arr[30] = { 99, 22, 51, 63, 72, 61, 20, 88, 40, 21, 63, 30, 11, 18, 99, 12, 93, 16, 7, 53,
//				64, 9, 28, 84, 34, 96, 52, 82, 51, 77 };
//
//	for (int i = 0; i < 30; i++)
//	{
//		for (int j = i; j < 30; j++)
//		{
//			if (arr[i] * arr[j] >= 2022)st[i][j] = 1;
//		}
//	}
//	int ans = 0;
//	for(int i=0;i<30;i++)
//		for (int j = i; j < 30; j++)
//		{
//			if (st[i][j] == 1 && i != j)ans++;
//		}
//	cout << ans;
//
//	return 0;
//}



//int main()
//{
//	int n = 28;
//	char arr[1000];
//	int cnt = 0;
//	while (n)
//	{
//		char s = n % 26 + 'A' - 1;
//		arr[cnt++] = s;
//		n /= 26;
//	}
//
//	return 0;
//}




//const int N = 110;
//int g[N][N];
//
//
//int main()
//{
//	int n, m, t;
//	cin >> n >> m >> t;
//	while (t--)
//	{
//		int r1, c1, r2, c2;
//		cin >> r1 >> c1 >> r2 >> c2;
//		for (int i = r1; i <= r2; i++)
//			for (int j = c1; j <= c2; j++)
//				g[i][j] = 1;
//	}
//	int cnt = n * m;
//	for (int i = 1; i <= n; i++)
//		for (int j = 1; j <= m; j++)
//			if (g[i][j] == 1)cnt--;
//	cout << cnt;
//
//	return 0;
//}




//const int N = 110;
//int f[N][N];
//
//int main()
//{
//	int W, H, n, R;
//	cin >> W >> H >> n >> R;
//	while (n--)
//	{
//		int x, y;
//		cin >> x >> y;
//		int x1 = H - x;
//		int y1 = y;
//		f[x1][y1] = 1;
//		for (int i = 0; i <= H; i++)
//		{
//			for (int j = 0; j <= W; j++)
//			{
//				if ((x1 - i) * (x1 - i) + (j - y1) * (j - y1) <= R * R)f[i][j] = 1;
//			}
//		}
//	}
//
//	int cnt = 0;
//	for (int i = 0; i <= H; i++)
//		for (int j = 0; j <= W; j++)
//			if (f[i][j] == 1)cnt++;
//
//	cout << cnt << endl;
//
//
//	return 0;
//}




//int main()
//{
//	int n, a; 
//	cin >> n >> a;
//
//	int sum = n + a;
//	if (sum % 7 == 0)cout << 7;
//	else cout << (sum % 7);	
//
//
//	return 0;
//}


//const int N = 1e5 + 10;
//char a[16] = { '0','1','2','3','4','5','6','7','8','9','A','B','C','D' ,'E' ,'F' };
//
//bool check(int num)
//{
//	int cnt = 0;
//	char arr[N];
//	while (num)
//	{
//		arr[cnt++] = a[num % 16];
//		num /= 16;
//	}
//	int i;
//	for ( i = 0; i < cnt;)
//	{
//		if (arr[i] <= 'F' && arr[i] >= 'A')i++;
//		else break;
//	}
//	if (i == cnt)return 1;
//	else return false;
//}
//
//
//int main()
//{
//	for (int i = 2022;; i++)
//	{
//		if (check(i))
//		{
//			cout << i;
//			break;
//		}
//	}
//	return 0;
//}