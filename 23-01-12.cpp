#pragma warning(disable:4996)
#include<iostream>
#include<string>
#include<map>

using namespace std;


//int a[100001];
//int main()
//{
//	int n; cin >> n;
//	while (n--)
//	{
//		int sz; cin >> sz;
//		for (int i = 0; i < sz; i++)	//����
//		{
//			cin >> a[i];
//		}
//
//		int l = 0, r = sz - 1;
//		while (a[l] >= a[l + 1])	//��������
//		{
//			l++;
//		}
//
//		while (a[r] >= a[r - 1])	//��������
//		{
//			r--;
//		}
//
//		if (l >= r) cout << "YES" << endl;	//�ж����˵��ཻΪɽ��
//		else cout << "NO" << endl;
//	}
//
//	return 0;
//}


//map<string, int>mp, mpp;
//int sc[100001], maxn = -99999;
//string nm[100001], ans;
//
//int main()
//{
//	int n; cin >> n;
//	for (int i = 0; i < n; i++)	//����
//	{
//		cin >> nm[i] >> sc[i];
//		mp[nm[i]] += sc[i];
//	}
//	
//	for (int i = 0; i < n; i++)	//�����
//	{
//		maxn = max(maxn, mp[nm[i]]);
//	}
//
//	for (int i = 0; i < n; i++)	//��һ�δﵽ���ֵ
//	{
//		mpp[nm[i]] += sc[i];
//		if (mpp[nm[i]] >= maxn && mp[nm[i]] == maxn)
//		{
//			ans = nm[i];
//			break;
//		}
//	}
//	
//	cout << ans << endl;
//
//	return 0;
//}


//int main()
//{
//	int num; cin >> num;
//	int i;
//	for (i = 2; i < num; i++)
//	{
//		if (num % i == 0) break;
//	}
//	cout << num / i << endl;
//	return 0;
//}


//int main()
//{
//	string str;
//	cin >> str;
//	int num = 0;
//	for (int i = 0; i < str.size(); i++)
//	{
//		num += str[i]-'0';
//	}
//	cout << num << endl;
//	cout << num * num << endl;
//	cout << num * num * num << endl;
//	return 0;
//}