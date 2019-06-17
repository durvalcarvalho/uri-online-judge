#include <bits/stdc++.h>
#define debug(x) std::cout << #x << " = " << x << std::endl
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL)
char _;
#define wait() std::cin >> _;

using namespace std;

struct Caixa
{
	bool available;
	int id;
	int will_end_at;

	// this vem antes de c ?
	bool operator>(const Caixa& c) const
	{
		if(available and c.available)
			return id > c.id;

		if(available)
			return false;

		if(c.available)
			return true;

		if(will_end_at == c.will_end_at)
			return id > c.id;

		return will_end_at > c.will_end_at;
	}
};

int main()
{
	fastio();
	
	int n, m;
	cin >> n >> m;

	vector<int> carrinhos(m), caixas(n);

	priority_queue<Caixa, vector<Caixa>, greater<Caixa>> max_heap;

	for(int i=0; i<n; i++)
	{
		cin >> caixas[i];

		max_heap.push({true, i, 0});
	}

	for(int i=0; i<m; i++)
		cin >> carrinhos[i];

	int ans = 0;

	for(int i=0; i<m; i++)
	{
		auto cl = max_heap.top(); max_heap.pop();

		cl.will_end_at += caixas[cl.id] * carrinhos[i];

		ans = max(ans, cl.will_end_at);

		cl.available = false;

		max_heap.push(cl);
	}

	cout << ans << endl;

	return 0;
}