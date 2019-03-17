#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int qnt;
    while (cin >> qnt)
    {
        cin.ignore();

        vector<string> boots;
        string aux;

        int pairs = 0;

        for(int i=0; i<qnt; i++)
        {
            getline(cin, aux);

            string aux2 = aux;

            if(aux.back() == 'E')
                aux2.back() = 'D';
            else
                aux2.back() = 'E';


            vector<string>::iterator it = find(boots.begin(), boots.end(), aux2);

            // Se o pé oposto existir, remova-o e contabilize 1 par
            if(it != boots.end())
            {
                // boots.erase(remove(boots.begin(), boots.end(), aux2), boots.end());
                boots.erase(it);
                pairs++;
            }

            // Caso contrário, adicione o novo pé
            else
            {
                boots.push_back(aux);
            }
        }

        cout << pairs << endl;
    }

    return 0;
}