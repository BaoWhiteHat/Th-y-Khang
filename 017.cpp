#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float x;
    cout << "Phap nhan x la: ";
    cin >> x;

    double x2 = x * x;
    double x4 = x2 * x2;
    double x8 = x4 * x4;
    double x10 = x8 * x2;
    double x11 = x10 * x;

    cout << "x mu 11 la: " << x11;

   return 0;
}