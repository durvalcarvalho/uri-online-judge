#include <bits/stdc++.h>
#define debug(x) std::cout << #x << " = " << x << std::endl;

using namespace std;

class UnionFind {
private:

	struct Jogador {
		int guild;
		int level;		
	};

	vector<Jogador> v;
	vector<int> rank;

public:
	UnionFind(vector<int> lvl){

		v.resize(lvl.size());
		rank.assign(lvl.size(), 0);

		for(int i=1; i<(int)lvl.size(); i++)
		{
			v[i].guild = i;
			v[i].level = lvl[i];
		}
	}

	int find(int i) {

		if(v[i].guild == i) return i;

		return v[i].guild = find(v[i].guild);
	}

	void merge(int a, int b) {
		
		int x = find(a);
		int y = find(b);

		if(a==b) return;

		v[y].guild = v[x].guild;

		if(rank[x] > rank[y])
		{
			v[y].guild = x;
			v[x].level += v[y].level;
		}

		else
		{
			v[x].guild = y;

			v[y].level += v[x].level;

			if(rank[x] == rank[y])
				rank[y]++;
		}
	}

	int guildPoints(int i) {
		int x = find(i);

		return v[x].level;
	}

	void deb()
	{
		for(int i=1; i<(int)v.size(); i++)
			cout << find(i) << " ";
		cout << endl;
	}
};

int main()
{
	int n, m;

	while(cin >> n >> m && n && m)
	{
		vector<int> p(n+1);
		
		for(int i=1; i<=n; i++)
			cin >> p[i];

		UnionFind uf(p);

		int ans = 0;

		for(int i=0; i<m; i++)
		{
			int q, a, b;
			cin >> q >> a >> b;

			if(q==1)
				uf.merge(a, b);

			else
			{
				int r = uf.find(1);

				int x = uf.find(a);
				int y = uf.find(b);

				if(r != x && r != y)
					continue;

				int px = uf.guildPoints(x);
				int py = uf.guildPoints(y);

				if(r == x && px > py)
					ans++;

				else if(r == y && py > px)
					ans++;
			}
		}

		cout << ans << endl;
	}

	return 0;
}