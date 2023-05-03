#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
typedef long long ll;
int main()
{
	ll start = 1, counter = 1;
	while (counter < 1500)
	{
		start++;
		ll number = start;
		while (number % 2 == 0)
		{
			number /= 2;
		}
		while (number % 3 == 0)
		{
			number /= 3;
		}
		while (number % 5== 0)
		{
			number /= 5;
		}
		if (number == 1)
		{
			counter++;
		}
	}
	cout << "The 1500'th ugly number is" << start << "." << endl;
	return 0;
}