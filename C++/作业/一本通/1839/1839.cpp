#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long n, maxm = 0, sum = 0;
	string name, maxn;
	char a/*ѧ���ɲ�*/, b/*����ʡ��ѧ��*/;
	long long score1 = 0/*��ĩƽ���ɼ�*/, score2 = 0/*�༶����ɼ�*/, para = 0, money = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		money = 0;
		cin >> name >> score1 >> score2 >> a >> b >> para;
		if (score1 > 80 && para > 0)	money += 8000;
		if (score1 > 85 && score2 > 80)	money += 4000;
		if (score1 > 90)				money += 2000;
		if (score1 > 85 && b == 'Y')	money += 1000;
		if (score2 > 80 && a == 'Y')	money += 850;
		if (maxm < money)
		{
			maxn = name;
			maxm = money;
		}
		sum += money;
	}
	cout << maxn << endl;
	cout << maxm << endl;
	cout << sum;
	return 0;
}
