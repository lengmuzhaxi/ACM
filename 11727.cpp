#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int t = 0, a = 0, b = 0, c = 0, i = 0;
	cin >> t;
	for (i = 1; i <= t; i++)
	{
		int a[3];
		cin >> a[0] >> a[1] >> a[2];
		sort(a, a + 3);
		printf("Case %d: %d\n", i, a[1]);
	}
	return 0;
}
