#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int M, A;
    double B, H, x, y, pi;
    M = 20;
    A = 0;
    pi = 3.1415;
    B = pi / 2;
    H = (B - A) / M;
     for (x = A; x <= B; x+=H)
    {
        y = sin(x) - cos(x);
        cout << "x = " << x << "\t" << " y = " << y << endl;
    }
      return 0;
}
