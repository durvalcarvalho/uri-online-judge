#include <iostream>

using namespace std;

int main()
{
    int total = 0;
    int qnt = 0;
    int iux;

    string aux1;
    while(getline(cin, aux1))
    {
        cin >> iux;
        cin.ignore();

        total += iux;
        qnt++;
    }

    printf("%.1f\n", total*1.0/qnt*1.0);

    return 0;
}