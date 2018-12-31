#include <iostream>

using namespace std;

int main()
{
    int pessoas, datas;

    while(cin >> pessoas >> datas)
    {
        string output = "Pizza antes de FdI";
        int flagK=0;

        for(int i=0; i<datas; i++)
        {
            string data;
            cin >> data;
            
            int flagA=0;

            for(int j=0; j<pessoas; j++)
            {
                int pessoa;
                cin >> pessoa;

                if(pessoa == 0) flagA=1;
            }

            if(flagA==0 && flagK==0)
            {
                output = data;
                flagK = 1;
            }
        }

        cout << output << endl;
    }

    return 0;
}