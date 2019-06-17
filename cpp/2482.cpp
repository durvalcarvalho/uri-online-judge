#include <bits/stdc++.h>
#define debug(x) std::cout << #x << " = " << x << std::endl
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL);
char _;
#define wait() std::cin >> _;

using namespace std;

int main()
{
	fastio();

	int q;
	cin >> q;

	map<string, string> dict;

	cin.ignore();

	while(q--)
	{
		string lang, transl;

		getline(cin, lang);
		getline(cin, transl);

		dict[lang] = transl;
	}

	cin >> q;

	cin.ignore();

	while(q--)
	{
		string name, lang;
		
		getline(cin, name);
		getline(cin, lang);

		cout << name << endl;
		cout << dict[lang] << endl;

		cout << endl;
	}

	return 0;
}