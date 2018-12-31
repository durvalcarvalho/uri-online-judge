#include <iostream>
#include <ctype.h>

using namespace std;

int main()
{
    int casos;
    cin >> casos;

    for(int i=0; i<casos; i++)
    {
        string placa;
        cin >> placa; 

        if( placa.length() == 8 &&
            isalpha(placa[0])   && isupper(placa[0]) &&
            isalpha(placa[1])   && isupper(placa[1]) &&
            isalpha(placa[2])   && isupper(placa[2]) &&
            placa[3] == '-'     &&
            isdigit(placa[4])   &&
            isdigit(placa[5])   &&
            isdigit(placa[6])   &&
            isdigit(placa[7])     )
        {

            if(placa[7] == '1' || placa[7] == '2')
                cout << "MONDAY" << endl;

            else if(placa[7] == '3' || placa[7] == '4')
                cout << "TUESDAY" << endl;
            
            else if(placa[7] == '5' || placa[7] == '6')
                cout << "WEDNESDAY" << endl;
            
            else if(placa[7] == '7' || placa[7] == '8')
                cout << "THURSDAY" << endl;
            
            else if(placa[7] == '9' || placa[7] == '0')
                cout << "FRIDAY" << endl;
        }

        else
            cout << "FAILURE" << endl;
    }


    return 0;
}