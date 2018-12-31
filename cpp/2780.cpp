#include <iostream>

using namespace std;

int main()
{
    int range;
    cin >> range;

    if(range <= 800)
        cout << "1" << endl;
    
    else if(range <= 1400)
        cout << "2" << endl;
    
    else
        cout << "3" << endl;

    return 0;
}