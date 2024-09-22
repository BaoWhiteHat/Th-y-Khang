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
    double x12 = x8 * x4;
    double x13 = x12 * x;

    cout << "x mu 13 la: " << x13;

   return 0;
}