#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
int main() 
{
	int a[5], b[5];
	while (cin >> a[0] >> a[1] >> a[2] >> a[3] >> a[4]) 
	{
		cin >> b[0] >> b[1] >> b[2] >> b[3] >> b[4];
		bool comp = true;
		for (int i = 0; i < 5; i++) comp &= a[i] ^ b[i];
		cout << (comp ? "Y" : "N") << endl;
	}
}