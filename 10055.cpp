#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
typedef long long ll;
int main()
{
	ll a = 0, b = 0;
	while (cin >> a >> b)
	{
		ll c = abs(a - b);
		cout << c << endl;
	}
	return 0;
}