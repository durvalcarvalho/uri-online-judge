#include <iostream>

using namespace std;

int main()
{
    int val = 97;

    do
    {
        printf("%d e %c\n", val, val);
        val++;
    } while(val <= 122);

    return 0;
}