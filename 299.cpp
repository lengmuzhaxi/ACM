#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
int main()
{
	int t = 0, i = 0, n = 0;
	cin >> t;
	while (t--)
	{
		int n = 0;
		cin >> n;
		int arr[1000] = { 0 };
		for (i = 0; i < n; i++)
		{
			cin >> arr[i];
		}
		int i = 0, j = 0, k = 0;
		for (i = 0; i < n - 1; i++)
		{
			for (j = 0; j < n - i - 1; j++)
			{
				if (arr[j] > arr[j + 1])
				{
					int t = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = t;
					k++;
				}
			}
		}
		printf("Optimal train swapping takes %d swaps.\n", k);
	}
	return 0;
}