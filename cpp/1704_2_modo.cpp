#include <bits/stdc++.h>

#define debug(x) std::cout << #x << " = " << x << std::endl

using namespace std;

int main()
{
    int N, H;

    while (cin>>N>>H)
    {
        int v, t, sum=0;

        vector<int> tempo(1010, 0);

        while (N--)
        {
            cin >> v >> t;

            for (int i=t; i>0; i--)
                if (max(tempo[i], v) == v)
                    swap(tempo[i], v);

            sum += v;
        }

        cout<<sum<<endl;
    }
    return 0;
}