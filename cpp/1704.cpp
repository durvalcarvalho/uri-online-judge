#include <bits/stdc++.h>
#define debug(x) std::cout << #x << " = " << x << std::endl
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL);
char _;
#define wait() std::cin >> _;

using namespace std;

int main()
{
    fastio();

    int a, b;
    while(cin >> a >> b)
    {
        priority_queue<int> v[1010];

        int resp = 0;
        for(int i=0; i<a; i++)
        {
            int x, y;
            cin >> x >> y;

            resp += x;

            v[y].push(x);
        }

        for(int i=b; i >= 1; i--)
        {
            int maior = 0;
            int maior_pos = 0;

            for(int j=b; j>=i; j--)
            {
                if(v[j].size() && v[j].top() > maior)
                {
                    maior = v[j].top();
                    maior_pos = j;
                }
            }

            if(maior_pos > 0)
            {
                resp -= maior;
                v[maior_pos].pop();
            }

        }

        cout << resp << endl;
    }

    return 0;
}