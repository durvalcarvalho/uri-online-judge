#include <bits/stdc++.h>
#define debug(x) std::cout << #x << " = " << x << std::endl;

using namespace std;

class Fenwick {
private:
	vector<int> v;

public:
	Fenwick(int q)
	{
		v.assign(q + 1, 0);
	}

	int rsq(int i)
	{
		int sum = 0;

		for (; i; i -= (i & -i))
			sum += v[i];

		return sum;
	}

	int rsq(int i, int j)
	{
		return rsq(j) - rsq(i - 1);
	}

	void update(int i, int val)
	{
		for (; i < (int)v.size(); i += (i & -i))
			v[i] += val;
	}
};

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int q;
	cin >> q;

	Fenwick f(q);

	for (int i = 1; i <= q; i++) {
		int aux;
		cin >> aux;

		f.update(i, aux);
	}

	char op;
	int n;
	while (cin >> op >> n) {
		if (op == 'a') {
			int val = f.rsq(n, n);
			f.update(n, -val);
		}

		else
			cout << f.rsq(1, n - 1) << endl;
	}

	return 0;
}