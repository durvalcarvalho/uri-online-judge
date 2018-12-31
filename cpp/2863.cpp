#include <iostream>

using namespace std;

int main()
{
    int casos;

    while(cin >> casos)
    {
        double recorde;
        
        for(int i=0; i<casos; i++)
        {
            double pace;
            cin >> pace;

            if(i==0)
                recorde = pace;
            
            if(pace < recorde)
                recorde = pace;
        }

        cout << recorde << endl;
    }

    return 0;
}