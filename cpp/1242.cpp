#include <bits/stdc++.h>
#define debug(x) std::cout << #x << " = " << x << std::endl;

using namespace std;

int main()
{
	string s;

	const set<string> matches { "SB", "BS", "CF", "FC" };

	while(cin >> s)
	{
		stack<char> a, b;
		stack<char> &prev = a, &next = b;

		for(auto c : s)
			a.push(c);

		bool match = true;
		int ans = 0;

		while(match)
		{
			match = false;

			while(prev.size())
			{
				auto c = prev.top();
				prev.pop();

				if(next.empty())
				{
					next.push(c);
					continue;
				}

				string comb {c, next.top() };

				if(matches.count(comb))
				{
					match = true;
					ans++;
					next.pop();
				}

				else
					next.push(c);
			}

			swap(prev, next);
		}

		cout << ans << endl;
	}

	return 0;
}