#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
int main()
{
	int t = 0;
	while (cin >> t)
	{
		int c = 0;
		for (int i = 0; i < 5; i++)
		{
			int n=0; 
			cin >> n;
			if (t == n)
			{
				c++;
			}
		}
		cout << c << endl;
	}
	return 0;
}