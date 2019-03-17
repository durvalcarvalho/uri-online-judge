#include <iostream>
#include <map>

using namespace std;

int main()
{
    int foram, voltaram;

    while(cin >> foram >> voltaram)
    {
        map<int, int> tabela;
        int number;

        for(int i=0; i<voltaram; i++)
        {
            cin >> number;

            if(foram != voltaram)
                tabela[number]++;
        }

        if(foram == voltaram)
            cout << "*\n";
        
        else
        {
            for(int i=1; i<=foram; i++)
            {
                if(tabela[i] != 1)
                    cout << i << " ";
            }

            cout << "\n";
        }

        tabela.clear();
    }

    return 0;
}

