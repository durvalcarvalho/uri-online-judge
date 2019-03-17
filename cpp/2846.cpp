#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int fibonacci()
{
    static long prev = 0;
    static long next = 1;

    long temp = prev + next;
    prev = next;
    next = temp;

    return prev;
}

int main()
{
    int pos;
    cin >> pos;

    vector<int> fib_num;

    int i = 0;
    int notFib = 0;
    while(i < pos)
    {   
        notFib++;
        while(fib_num.empty() or notFib > fib_num.back())
        {
            fib_num.push_back(fibonacci());
        }

        if(find(fib_num.begin(), fib_num.end(), notFib) == fib_num.end())
        {
            i++;
        }
        
    }

    cout << notFib << endl;

    return 0;
}