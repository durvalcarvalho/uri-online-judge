#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    char first, second;
    int primeiro, segundo;
    
    cin >> first >> primeiro >> second >> segundo;

    if(abs(second-first) == 1)
        if(abs(segundo-primeiro)==2)
            cout << "VALIDO\n";
        else
            cout << "INVALIDO\n";
    else if(abs(segundo-primeiro)==1)
        if(abs(second-first) == 2)
            cout << "VALIDO\n";
        else
            cout << "INVALIDO\n";
    else
        cout << "INVALIDO\n";

    return 0;
}