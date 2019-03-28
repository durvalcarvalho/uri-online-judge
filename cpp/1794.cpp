#include <iostream>
using namespace std;

int main()
{
	int roupas;
	cin >> roupas;

	int minLav, maxLav;
	cin >> minLav >> maxLav;

	int minSec, maxSec;
	cin >> minSec >> maxSec;

	if( minLav <= roupas and roupas <= maxLav
	and minSec <= roupas and roupas <= maxSec)
		cout << "possivel\n";

	else
		cout << "impossivel\n";

	return 0;
}