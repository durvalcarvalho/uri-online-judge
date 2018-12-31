#include <iostream>

using namespace std;

int main()
{
    string perna;

    while(cin >> perna)
    {
        if(perna[0] == 'e')
            cout << "ingles\n";
        
        else if(perna[0] == 'd')
            cout << "frances\n";
        
        else if (perna[0] == 'n')
            cout << "portugues\n";
        
        else
            cout << "caiu\n";
    }

    return 0;
}