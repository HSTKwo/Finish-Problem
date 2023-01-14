#pragma warning(disable:4996)
#include<iostream>
#include<string>
#include<vector>
using namespace std;

//class Person
//{
//public:
//	Person(string name, int score)
//	{
//		this->m_name = name;
//		this->m_score = score;
//	}
//	string m_name;
//	int m_score;
//};
//
//int main()
//{
//	vector<Person> a;
//	int n; cin >> n;
//	while (n--)
//	{
//		string name; cin >> name;
//		int score; cin >> score;
//		a.push_back()
//	}
//
//	return 0;
//}

//int main()
//{
//	int L, i = 0, n; cin >> L;
//	vector<int>arr;
//	while (i < L)
//	{
//		int x; cin >> x;
//		arr.push_back(x);
//		i++;
//	}
//	cin >> n;
//	while (n--)
//	{
//		int a, b, c;
//		cin >> a;
//		if (a == 2) cin >> b, cout << arr[b - 1] << endl;
//		else cin >> b >> c, arr[b - 1] = c;
//	}
//	return 0;
//}


//int main()
//{
//	int n; cin >> n;
//	while (n--)
//	{
//		int num, i = 0, flag = 0, tem; cin >> num;
//		tem = num;
//		vector<int> x;
//		while (num--)
//		{
//			int a; cin >> a;
//			x.push_back(a);
//		}
//
//		while (i < tem)
//		{
//			if (x[i] <= x[i + 1]) i++, flag = 1;
//			else i++, flag = 0;
//		}
//		if (flag == 1 || num == 1) cout << "YES";
//	}
//
//
//	return 0;
//}


//int main()
//{
//	int i = 0, ans = 0;
//	string x;
//	cin >> x;
//	while (i < x.size())
//	{
//		if (x[i] == x[i + 1] &&x[i]=='0') i += 2, ans += 1;
//		else i++, ans += 1;
//	}
//	cout << ans;
//	return 0;
//}

//int main()
//{
//	int n;
//	cin >> n;
//	while (n--)
//	{
//		int num, ans = 0, i = 0, max = 0;
//		cin >> num;
//		string str;
//		cin >> str;
//		while (i < num)
//		{
//			if (str[i] - 'a' + 1 > max)
//			{
//				max = str[i] - 'a' + 1;
//			}
//			i++;
//		}
//		cout << max << endl;
//	}
//	return 0;
//}

//int main()
//{
//	string a;
//	cin >> a;
//	int i = 0, ans = 0;
//	while (i<a.size())
//	{
//		if (a[i] == 'w') ans += 2;
//		else ans += 1;
//		i++;
//	}
//	cout << ans;
//
//	return 0;
//}

//int main()
//{
//	int n;
//	cin >> n;
//	map<string, int> a;
//	while (n--)
//	{
//		string name;
//		int score;
//		cin >> name >> score;
//
//		a.insert(pair<string,int>(name,score));
//	}
//
//}