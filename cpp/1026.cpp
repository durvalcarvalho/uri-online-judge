#include <iostream>
#include <string>
#include <bitset>

using namespace std;

int main()
{
    long unsigned int a, b;
    while(cin >> a >> b)
    {
        long unsigned int c =  a ^ b;
        cout << c << endl;

        // string sa = bitset<32>(a).to_string();
        // string sb = bitset<32>(b).to_string();

        // string sc;

        // for(int i=0; i<32; i++)
        // {
        //     if(sa[i] == sb[i])
        //     {
        //         sc = sc + "0";
        //     }

        //     else
        //     {
        //         sc = sc + "1";
        //     }
            
        // }

        // unsigned long result = bitset<32>(sc).to_ulong();

        // cout << result << endl;
    };

    return 0;
}