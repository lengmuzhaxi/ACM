#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
int main()
{
	int t = 0;
	cin >> t;
	cout << "Lumberjacks:" << endl;
	while (t--)
	{
		int i = 0, m = 0, arr[10] = { 0 };
		for (i = 0; i < 10; i++)
		{
			cin >> arr[i];
		}
		for (i = 0; i < 9; i++)
		{
			if (arr[i] < arr[i + 1])
			{
				m++;
			}
			if (arr[i] > arr[i + 1])
			{
				m--;
			}
		}
		m = abs(m);
		if (m== 9)
		{
			cout << "Ordered" << endl;
		}
		else
		{
			cout << "Unordered" << endl;
		}
	}
	return 0;
}