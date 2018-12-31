#include <iostream>

using namespace std;

int main()
{
    int casos;

    while(cin >> casos)
    {
        for(int i=0; i<casos; i++)
        {
            int forca;

            cin >> forca;

            if(forca > 8000)
                cout << "Mais de 8000!\n";
            
            else
                cout << "Inseto!\n";
        }
    }
}