#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
int main()
{
	int t = 0;
	cin >> t;
	while (t--)
	{
		string s;
		cin >> s;
		if (s.size() == 5)
		{
			cout << "3" << endl;
		}
		else
		{
			if ((s[0] == 'o' && s[1] == 'n') || (s[0] == 'o' && s[2] == 'e') || (s[1] == 'n' && s[2] == 'e'))
			{
				cout << "1" << endl;
			}
			else {
				cout << "2" << endl;
			}
		}
	}
}
