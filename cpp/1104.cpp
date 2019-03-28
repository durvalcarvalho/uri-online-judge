#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

int main()
{
	int qntA, qntB;

	while(cin >> qntA >> qntB)
	{
		if(!qntA or !qntB)
			break;

		set<int> setA, setB;

		int aux;
		for(int i=0; i<qntA; i++)
		{
			cin >> aux;
			setA.insert(aux);

		}

		for(int i=0; i<qntB; i++)
		{
			cin >> aux;
			setB.insert(aux);
		}

		set<int> difA, difB;

		set_difference(setA.begin(), setA.end(), setB.begin(), setB.end(), inserter(difA, difA.end()));

		set_difference(setB.begin(), setB.end(), setA.begin(), setA.end(), inserter(difB, difB.end()));

		cout << (difA.size() < difB.size() ? difA.size() : difB.size() ) << endl;
	}

	return 0;
}