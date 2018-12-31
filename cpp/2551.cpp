#include <iostream>

using namespace std;

int main()
{
    int treinos;
    
    while(cin >> treinos)
    {    
        float recorde = 0.0;

        for(int i=0; i<treinos; i++)
        {
            int duracao, distancia;
            
            cin >> duracao >> distancia;

            if( (distancia*1.0 / duracao*1.0) > recorde )
            {
                cout << i+1 << endl;
                recorde = (distancia*1.0 / duracao*1.0);
            }
        }
    }

    return 0;
}