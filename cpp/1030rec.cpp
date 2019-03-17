#include <iostream>
#include <vector>

using namespace std;

int josephus(int pessoas, int pulos)
{
    if(pessoas == 1)
        return 1;
    
    else
    {
        return (josephus(pessoas-1, pulos) + pulos - 1) % pessoas + 1;
    }
}

int main()
{
    int casos;
    cin >> casos;

    int pessoas, pulos;
    
    for(int i=0; i<casos; i++)
    {
        cin >> pessoas >> pulos;

        cout << "Case " << i+1 << ": " 
            << josephus(pessoas, pulos) << endl;
    }

    return 0;
}