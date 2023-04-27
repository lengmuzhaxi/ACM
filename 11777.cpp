#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int t = 0, i = 0, j=0,arr[10] = { 0 },sum=0;
	cin >> t;
	for (i = 1; i <= t; i++)
	{
		if (sum > 0)
			sum = 0;
		for (j = 0; j < 7; j++)
		{
			cin >> arr[j];
		}
		sort(arr + 4, arr + 7);
		for (j = 0; j < 4; j++)
		{
			sum += arr[i];
		}
		sum += (arr[5] + arr[6]) / 2;
		cout << "Case " << i << ": ";
		if (sum >= 90) cout << "A" << endl;
		else if (sum >= 80) cout << "B" << endl;
		else if (sum >= 70) cout << "C" << endl;
		else if (sum >= 60) cout << "D" << endl;
		else cout << "F" << endl;
	}
	return 0;
}