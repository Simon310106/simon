#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	scanf("%d", &n);
	while (n != 0)
	{
		printf("%d ", n % 10);
		n /= 10;
	}
	return 0;
}
