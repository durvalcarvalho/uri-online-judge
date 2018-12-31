#include <iostream>

using namespace std;

int main()
{
    int casos, wins=0;
    cin >> casos;

    for(int i=0; i<casos; i++)
    {
        int premio;
        cin >> premio;

        if(premio!=1)
            wins++;
    }

    cout << wins << endl;

    

    return 0;
}