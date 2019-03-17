#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int casos;
    cin >> casos;

    int pessoas, pulos;
    


    for(int i=0; i<casos; i++)
    {
        cin >> pessoas >> pulos;
        vector<int> vec;

        if(pulos==1)
            cout << "Case " << i+1 << ": " << pessoas << endl;

        else
        {
        
            for(int j=1; j<=pessoas; j++) vec.push_back(j);

            int val=1, index = 0;
            while(vec.size() > 1)
            {
                if(val == pulos)
                {
                    val = 1;
                    vec.erase(vec.begin() + index);
                    pessoas--;

                    index = (index+1) % pessoas;
                }

                else
                {
                    index = (index+1) % pessoas;
                }
                
                val++;
            }

            cout << "Case " << i+1 << ": " << vec[0] << endl;
        }
    }
    
    return 0;
}