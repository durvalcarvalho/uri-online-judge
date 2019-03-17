#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>

using namespace std;

bool myFunc(pair<int, int> a, pair<int, int> b)
{
    if(a.first == b.first)
        return a.second > b.second;

    return a.first < b.first;
}

int main()
{
    int casos;
    cin >> casos;

    int total, qnt;
    int id, h, w, l, vol;

    for(int i=0; i<casos; i++)
    {
        vector<pair<int, int>> presentes;
        cin >> total >> qnt;

        for(int j=0; j<total; j++)
        {
            cin >> id >> h >> w >> l;
            vol = h * w * l;
            
            pair<int, int> pres = make_pair(vol, id);
            presentes.push_back(pres);
        }

        sort(presentes.begin(), presentes.end(), myFunc);

        for(int j=0; j<qnt; j++)
        {
            auto it = presentes.back();

            cout << it.second;

            if(j+1 != qnt)
                cout << " ";
            
            presentes.pop_back();
        }

        cout << "\n";
    }

    return 0;
}