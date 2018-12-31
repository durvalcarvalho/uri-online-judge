#include <iostream>

using namespace std;

int main()
{
    string linha;

    while(getline(cin, linha))
    {
        bool virgula = false;

        for(auto letra : linha)
        {
            if(letra==',' && !virgula )
            {
                virgula = true;
                cout << "\n";
            }

            else
                cout << letra;
        }
        cout << endl;
    }

    return 0;
}