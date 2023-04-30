#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
int main()
{
	int c, r;
	while (cin >> r >> c)
	{
		int a = 0, ct, x = 0;
		for (int i = 0; i < r; i++)
		{
			ct = 0;
			for (int j = 0; j < c; j++)
			{
				cin >> a;
				if (a > 0)
				{
					ct++;
				}
			}
			if (c == ct)
			{
				x++;
			}
		}
		cout << x << endl;
	}
	return 0;
}