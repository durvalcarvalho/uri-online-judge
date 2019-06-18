#include <bits/stdc++.h>
#define debug(x) std::cout << #x << " = " << x << std::endl
#define int long long
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL);

char _;
#define wait() std::cin >> _;

using namespace std;

main()
{
	fastio();

	int qnt, max_time;
	while(cin >> qnt >> max_time)
	{
		vector<int> lucro(qnt+1), tempo(qnt+1);
		vector<vector<int>> table(qnt+1, vector<int>(max_time+1));

		int max_possible=0;

		for(int i=1; i<=qnt; i++)
		{
			cin >> lucro[i] >> tempo[i];

			max_possible += lucro[i];
		}

		for(int i=0; i<=qnt; i++)
			table[i][0] = 0;

		for(int j=1; j<=max_time; j++)
		{
			table[0][j] = 0;

			for(int i=1; i<=qnt; i++)
			{
				int tot = table[i-1][j];

				if(tempo[i] <= j)
				{
					int soma = table[i-1][j-tempo[i] + lucro[i]];

					tot = max(tot, soma);
				}

				table[i][j] = tot;
			}
		}

		int got = table[qnt][max_time];

		debug(max_possible);
		debug(got);

	}
}