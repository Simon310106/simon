#include <bits/stdc++.h>
using namespace std;

int a[105];

int main(){
	int n, x;
	cin >> n >> x;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a, a + n);
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += a[i];
		if (sum > x) {
			cout << i;
			return 0;
		}
	}
	cout << n; 
	
	return 0;
}

