#include <iostream>
#include <stdio.h>
#include <cmath>

using namespace std;

int main()
{
    float a, b;
    // a = 3.1;
    // b = -3.14;
    double c, d;
    // c = -0.000;
    // d = 3.1415;

    cin >> a >> b;
    cin >> c >> d;

    printf("A = %.6f, B = %.6f\n", a, b);
    printf("C = %.6f, D = %.6f\n", c, d);

    printf("A = %.1f, B = %.1f\n", a, b);
    printf("C = %.1f, D = %.1f\n", c, d);

    printf("A = %.2f, B = %.2f\n", a, b);
    printf("C = %.2f, D = %.2f\n", c, d);

    printf("A = %.3f, B = %.3f\n", a, b);
    printf("C = %.3f, D = %.3f\n", c, d);

    printf("A = %.3E, B = %.3E\n", a, b);
    printf("C = %.3E, D = %.3E\n", c, d);

    // cout << "A = ";
    // if(signbit(a) and a==0)
    //     cout << "-";    
    // cout << int(a) << ", ";

    // cout << "B = ";
    // if(signbit(b) and b==0)
    //     cout << "-";
    // cout << int(b) << "\n";

    // cout << "C = ";
    // if(signbit(c) and c==0)
    //     cout << "-";
    // cout << int(c) << ", ";

    // cout << "D = ";
    // if(signbit(d) and d==0)
    //     cout << "-";
    // cout << int(d) << "\n";


    printf("A = %.0f, B = %.0f\n", a, b);
    printf("C = %.0f, D = %.0f\n", c, d);

    return 0;
}