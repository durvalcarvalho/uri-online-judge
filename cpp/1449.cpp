#include <bits/stdc++.h>
#define debug(x) std::cout << #x << " = " << x << std::endl;
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL);

char _;
#define wait() std::cin >> _;

using namespace std;

int main()
{
	fastio()
	
	int casos;
	cin >> casos;

	while(casos--)
	{
		int m, n;
		cin >> m >> n;

		map<string, string> dict;

		cin.ignore();

		while(m--)
		{
			string jp, pt;

			getline(cin, jp);
			getline(cin, pt);

			dict[jp] = pt;
		}

		while(n--)
		{
			string phrase;
			getline(cin, phrase);

			stringstream ss(phrase);

			vector<string> aux;

			while(ss >> phrase)
			{
				if(dict.count(phrase))
					aux.push_back(dict[phrase]);
				
				else
					aux.push_back(phrase);
			}

			for(size_t i=0; i<aux.size(); i++)
				cout << aux[i] << (i+1 == aux.size() ? '\n' : ' ');
		}

		cout << '\n';
	}

	return 0;
}