#pragma warning(disable:4996)

//#include<iostream>
//#include<algorithm>
//#include<string>
//
//using namespace std;
//
//int main()
//{
//	int a, b, n;
//	cin >> a >> b >> n;
//	int cnt1 = 0, cnt2 = 0;
//	while (n--)
//	{
//		int a1, b1, c1, d1;
//		cin >> a1 >> b1 >> c1 >> d1;
//		if (b1 == a1 + c1 && d1 != a1 + c1)a--, cnt1++;
//		else if (d1 == a1 + c1 && b1 != a1 + c1)b--, cnt2++;
//		else if (a1 == c1)
//		{
//			continue;
//			a--, b--;
//		}
//		if (a < 0)
//		{
//			cout << 'A' << endl << cnt2<< endl;
//			break;
//		}
//		if (b < 0)
//		{
//			cout << 'B' << endl << cnt1 << endl;
//			break;
//		}
//	}
//	return 0;
//}



//int main()
//{
//	string a, b;
//	getline(cin, a);
//	getline(cin, b);
//
//	for (int i = 0; a[i];i++)
//	{
//		for (int j = 0; b[j]; j++)
//		{
//			if (a[i] == b[j])
//			{
//				a.erase(a.begin() + i);
//				i--;
//				break;
//			}
//		}
//	
//	}
//	cout << a << endl;
//}


//int main()
//{
//	string num;
//	cin >> num;
//
//	float ans;
//	float bs = 1;
//	if (num[0] == '-')bs = 1.5;
//	if (num[num.size() - 1] % 2 == 0)bs *= 2;
//	float cnt = 0, sum = 0;
//	for (int i = 0; i < num.size(); i++)
//	{
//		if (num[i] == '2')cnt++;
//		if (num[i] != '-')sum++;
//	}
//	ans = cnt / sum * bs * 100.0;
//	printf("%.2f%%", ans);
//	return 0;
//}




//int gcd(long long a1, long long b1)
//{
//	return b1 ? gcd(b1, a1 % b1) : a1;
//}
//
//int main()
//{
//	int n;
//	cin >> n;
//	n = n - 1;
//	long long a, b, x, y;
//	scanf("%ld/%ld", &a, &b);
//	while (n--)
//	{
//		scanf("%ld/%ld", &x, &y);
//		a = a * y + x * b;
//		b = b * y;
//		if (gcd(a, b) != 1)
//		{
//			int num = gcd(a, b);
//			a /= num;
//			b /= num;
//		}
//	}
//
//	int num = gcd(a, b);
//	a /= num;
//	b /= num;
//	
//	if (a % b == 0)
//	{
//		cout << a / b;
//	}
//	else if (a > b && a % b != 0)
//	{
//		cout << a / b << ' ' << a % b << '/' << b;
//	}
//	else
//		cout << a << '/' << b;
//
//	return 0;
//}


//int main()
//{
//	int num;
//	cin >> num;
//
//	for (int len = 13; len >= 1; len--)
//	{
//		for (int start = 2; start <= num / start; start++)
//		{
//			int sum = 1;
//			for (int i = start; i < len + start; i++)
//				sum *= i;
//			if (num % sum == 0)
//			{
//				cout << len << endl << start;
//				for (int k = start + 1; k < len + start; k++)
//					printf("*%d", k);
//				return 0;
//			}
//		}
//	}
//	cout << 1 << endl << num;
//	return 0;
//}



//int main()
//{
//	int num;
//	char s;
//	cin >> num >> s;
//	int r, sum;
//	for (int i = 1; i <= num ; i++)
//	{
//		if (2 * i * i - 1 <= num && 2 * (i + 1) * (i + 1) - 1 > num)
//		{
//			r = 2 * i - 1;
//			sum = 2 * i * i - 1;
//		}
//	}
//
//	int cnt = r;
//
//	for (int i = 1; i <= r; i++)
//	{
//		for (int k = 1; k <= (r - cnt) >> 1; k++)printf(" ");
//		for (int j = 1; j <= cnt; j++)printf("%c", s);
//		if (i < (r + 1) >> 1)cnt -= 2;
//		else cnt += 2;
//		printf("\n");
//	}
//	cout << (num-sum) << endl;
//
//
//	return 0;
//}




//int st[1000];
//
//int main()
//{
//	int n, k, s;
//	cin >> n >> k >> s;
//	int count = 0;
//	while (n--)
//	{
//		int a, b;
//		cin >> a >> b;
//		if (a >= 175)
//		{
//			if (b >= s)
//				count++;
//			else
//			{
//				st[a]++;
//				if (st[a] <= k)count++;
//			}
//		}
//	}
//	cout << count;
//
//	return 0;
//}