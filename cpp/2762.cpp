#include <iostream>

using namespace std;

int main()
{
    unsigned long long int prev, pos;

    scanf("%llu.%llu", &pos, &prev);
    printf("%llu.%llu\n", prev, pos);

    return 0;
}