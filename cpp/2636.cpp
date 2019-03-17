#include <iostream>
using namespace std;

int main()
{
    long long val;

    while(cin >> val)
    {
        if(val == 0)
            break;
        
        cout << val << " = ";

        long long j=0;
        for(long long i=2; i<=val; i++)
        {
            if(val%i==0)
            {
                j++;
                cout << i;
                val = val/i;

                if(j!=3)
                    cout << " x ";
                else
                    cout << "\n";
            }
        }

    }

    return 0;
}