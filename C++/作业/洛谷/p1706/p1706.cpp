#include <bits/stdc++.h>
using namespace std;

int a[10];

int main(){
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        a[i] = i + 1;
    }
    do {
        for (int i = 0; i < n; i++) {
            printf("%5d", a[i]);
        }
        cout << endl;
    } while (next_permutation(a, a + n));
    return 0;
}