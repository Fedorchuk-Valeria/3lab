#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n = 1;
    double sum, d;
    sum = 0;
    do {
        d = pow (1.0 / 2, n) + pow (1.0 / 3, n);
        sum += d;
        ++n;
        } while (d >= 0.001);
    cout << "summa = " << sum;
    return 0;
}
