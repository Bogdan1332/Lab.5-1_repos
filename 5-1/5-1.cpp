#include <iostream>
#include <cmath>
using namespace std;
double f(const double a);
int main()
{
    double x;
    cout << "x = "; cin >> x;
    double c = 2 * f(1 + x * x) + pow(f(x), 2) / 1 + pow(f(sqrt(abs(1 - x * x))), 3);
    cout << "c = " << c << endl;
    return 0;
}
double f(const double a)
{
    return ((1 + a + ((a * a) / 2)) / (1 + abs(a)));
}