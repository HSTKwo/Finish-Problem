#pragma warning(disable:4996)
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


//https://www.luogu.com.cn/training/269924#problems

//int main()
//{
//	int num;
//	cin >> num;
//	while (num--)
//	{
//		int n;
//		cin >> n;
//		vector<int> a;
//		while (n--)
//		{
//			int x;
//			cin >> x;
//			a.push_back(x);
//		}
//
//		auto maxp1 = max_element(a.begin(), a.end());
//		int tem1 = *maxp1;
//		int maxp = maxp1 - a.begin();
//		a.erase(maxp1);
//
//		auto maxp2 = max_element(a.begin(), a.end());
//		int tmp2 = *maxp2;
//		a.insert(a.begin()+maxp, tem1);
//
//		for (auto it = a.begin(); it != a.end(); it++)
//		{
//			if (*it != tem1)
//			{
//				cout << *it - tem1 <<' ';
//			}
//			else
//			{
//				cout << *it - tmp2 << ' ';
//			}
//		}
//		cout << endl;
//	}
//	return 0;
//}

//https://www.luogu.com.cn/problem/CF4A

//int main()
//{
//	int num;
//	cin >> num;
//	if(num==2) printf("NO");
//	else if (num % 2 == 0)  printf("YES");
//	else printf("NO");
//	return 0;
//}