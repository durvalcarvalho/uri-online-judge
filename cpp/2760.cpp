#include <iostream>

using namespace std;

int main()
{
    string a, b, c;

    getline(cin, a);
    getline(cin, b);
    getline(cin, c);

    cout << a << b << c << endl;
    cout << b << c << a << endl;
    cout << c << a << b << endl;

    if(a.size() > 10)
        a.resize(10);
    
    if(b.size() > 10)
        b.resize(10);
    
    if(c.size() > 10)
        c.resize(10);

    cout << a << b << c << endl;

    return 0;
}