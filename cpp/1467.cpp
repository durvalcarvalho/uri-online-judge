#include <iostream>

using namespace std;

int main()
{
    int jog[3];
    while(cin >> jog[0] >> jog[1] >> jog[2])
    {
        int i;
        for(i=0; i<3; i++)
        {
            int dif = 0;

            for(int j=1; j<3; j++)
            {
                if(jog[i] != jog[(i+j)%3])
                {
                    dif++;
                }
            }

            if(dif==2)
            {
                break;
            }
        }

        if(i==0) cout << "A" << endl;
        if(i==1) cout << "B" << endl;
        if(i==2) cout << "C" << endl;
        if(i==3) cout << "*" << endl;

    };

    return 0;
}