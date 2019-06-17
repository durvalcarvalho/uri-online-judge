#include <bits/stdc++.h>

using namespace std;

using ll = long long int;

class FenwickTree
{
private:
	vector<ll> ft1, ft2;

	ll rsq(vector<ll>& ft, ll i)
	{
		ll sum = 0;

		for(; i; i-=(i&-i))
			sum += ft[i];

		return sum;
	}

	void update(vector<ll>& ft, ll i, ll v)
	{
		for(; i<ll(ft.size()); i+=(i&-i))
			ft[i] += v;
	}

public:
	FenwickTree(ll n) {
		ft1.assign(n+1, 0);
		ft2.assign(n+1, 0);
	}

	void update(ll i, ll j, ll v)
	{
		if(j < i)
			swap(j, i);

		update(ft1, i, v);
		update(ft1, j+1, -v);

		update(ft2, i, v*(i-1));
		update(ft2, j+1,-v*j);
	}

	ll rsq(ll i)
	{
		return rsq(ft1, i)*i - rsq(ft2, i);
	}

	ll rsq(ll i, ll j)
	{
		if(j < i)
			swap(j, i);

		return rsq(j) - rsq(i-1);
	}
};

int main()
{
	ll q;
	cin >> q;

	while(q--)
	{
		ll n, c;
		cin >> n >> c;

		FenwickTree ft(n);

		while(c--)
		{
			bool op;
			ll pp, qq;

			cin >> op >> pp >> qq;;

			if(op == 0)
			{
				ll vv;
				cin >> vv;

				ft.update(pp, qq, vv);
			}

			else
				cout << ft.rsq(pp, qq) << endl;
		}
	}

	return 0;
}