#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<algorithm>
using namespace std;
//int main()
//{
//    int t;
//    cin >> t;
//    while (t--)
//    {
//        int n = 0, i = 0, m = 0;
//        cin >> n;
//        int arr[51] = { 0 };
//        for (i = 0; i < 2 * n; i++)
//        {
//            cin >> m;
//            if (arr[m] == 0)
//            {
//                cout << m << " ";
//                arr[m]++;
//            }
//        }
//        cout << "\n";
//    }
//    return 0;
//}
int main()
{
	int t = 0, i = 0, j = 0, n = 0, arr[100] = { 0 };
	cin >> t;
	while (t--)
	{
		int m = 0;
		cin >> n;
		for (i = 0; i < 2 * n; i++)
		{
			cin >> arr[i];
		}
		sort(arr, arr + n);
		for (i = 0,j=0; i =j<2*n; i++,j++)
		{
			arr[0] = i == j;
			if (arr[i] != arr[j])
			{
				j++;
				arr[j] = arr[i];
				m++;
			}
		}
		for (i = 0; i < m; i++)
		{
			cout << arr[i] << endl;
		}
		cout << "\n";
	}
	return 0;
}