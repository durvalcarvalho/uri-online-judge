#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

int main()
{
    int qnt;
    
    while(cin >> qnt)
    {
        vector<pair<int, string>> churras;

        for(int i=0; i<qnt; i++)
        {
            pair<int, string> carne;
            cin >> carne.second >> carne.first;

            churras.push_back(carne);
        }

        sort(churras.begin(), churras.end());

        for(int i=0; i<churras.size(); i++)
        {
            cout << churras[i].second;

            if(i+1 != churras.size())
            {
                cout << " ";
            }

            else
                cout << "\n";
        }
    }

    return 0;
}