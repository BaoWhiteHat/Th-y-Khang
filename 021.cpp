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
    double x16 = x8 * x8;
    double x15 = x16 / x;

    cout << "x mu 15 la: " << x15;

   return 0;
}