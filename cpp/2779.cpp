#include <iostream>
#include <set>

using namespace std;

int main()
{
    int total;
    cin >> total;

    int compradas;
    cin >> compradas;
    
    int fig;
    set<int> myFigs;
    while(compradas--)
    {
        cin >> fig;
        myFigs.insert(fig);
    }

    cout << total - myFigs.size() << endl;

    return 0;
}