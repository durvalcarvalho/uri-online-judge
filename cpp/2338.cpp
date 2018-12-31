#include <bits/stdc++.h>

using namespace std;

int main()
{
    map<string, char> alfabeto;

    alfabeto["=.==="] = 'a';
    alfabeto["===.=.=.="] = 'b';
    alfabeto["===.=.===.="] = 'c';
    alfabeto["===.=.="] = 'd';
    alfabeto["="] = 'e';
    alfabeto["=.=.===.="] = 'f';
    alfabeto["===.===.="] = 'g';
    alfabeto["=.=.=.="] = 'h';
    alfabeto["=.="] = 'i';
    alfabeto["=.===.===.==="] = 'j';
    alfabeto["===.=.==="] = 'k';
    alfabeto["=.===.=.="] = 'l';
    alfabeto["===.==="] = 'm';
    alfabeto["===.="] = 'n';
    alfabeto["===.===.==="] = 'o';
    alfabeto["=.===.===.="] = 'p';
    alfabeto["===.===.=.==="] = 'q';
    alfabeto["=.===.="] = 'r';
    alfabeto["=.=.="] = 's';
    alfabeto["==="] = 't';
    alfabeto["=.=.==="] = 'u';
    alfabeto["=.=.=.==="] = 'v';
    alfabeto["=.===.==="] = 'w';
    alfabeto["===.=.=.==="] = 'x';
    alfabeto["===.=.===.==="] = 'y';
    alfabeto["===.===.=.="] = 'z';
    alfabeto["......."] = ' ';

    int casos;

    cin >> casos;

    for(int i=0; i<casos; i++)
    {
        string msg;
        getline(cin, msg);

        vector<string> codigo;
        
        for(int i=0; i<msg.length()-2; i++)
        {
            if(msg[i]=='.' && msg[i+1]=='.' && msg[i+2]=='.')
            {
                string aux = "=.===.===.===";

                for(int j=0; j<i; j++)
                {
                    aux[j] = msg[j];
                }
            }
        }
    }

    return 0;
}