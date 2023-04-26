#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
int main()
{
	int a = 0, b = 0, t = 0;
	cin >> t;
	while (t--)
	{
		cin >> a >> b;
		if (a > b)
		{
			cout << ">" << endl;
		}
		else if(a<b)
		{
			cout << "<" << endl;
		}
		else
		{
			cout << "=" << endl;
		}
	}
	return 0;
}