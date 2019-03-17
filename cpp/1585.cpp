#include <iostream>

using namespace std;

int main()
{
	int i;
	cin >> i;

	for(int j=0; j<i; j++)
	{
		int val1, val2;
		cin >> val1 >> val2;

		cout << (val1 * val2)/2 << " cm2\n";
	}

	return 0;
}