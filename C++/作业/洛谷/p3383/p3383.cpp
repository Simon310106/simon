#include <bits/stdc++.h>
using namespace std;

int n, q, p[100000005], cnt, a;
bool b[100000050];

int main(){
	scanf("%d %d", &n, &q);
	memset(b, 1, sizeof(b));
	for (int i = 2; i <= n; i++) {
		if (b[i] == 1) {
			p[cnt++] = i;
		}
        for (int j = 0; j < cnt && i * p[j] <= n; j++) {
            b[i * p[j]] = 0;
            if (i % p[j] == 0) {
                break;
            }
        }
	}
	for (int i = 0; i < q; i++) {
		cin >> a;
		cout << p[a - 1] << endl;
	}
	return 0;
}
