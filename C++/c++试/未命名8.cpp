#include <bits/stdc++.h>
using namespace std;

int a[105];

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int q;
	cin >> q;
	for (int i = 0; i < q; i++) {
		int l, r;
		cin >> l >> r;
		sort(a + l - 1, a + r);
	}
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	
    return 0;
}
