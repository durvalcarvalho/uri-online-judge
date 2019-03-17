#include <iostream>
using namespace std;

int main()
{
    int x, y, qnt;
    
    int xp, yp;
    while(cin >> x >> y >> qnt)
    {
        for(int i=0; i<qnt; i++)
        {
            cin >> xp >> yp;

            if((xp<=x && yp<=y) || (xp<=y && yp<=x))
                cout << "Sim\n";
            else
                cout << "Nao\n";
        }
    }

    return 0;
}