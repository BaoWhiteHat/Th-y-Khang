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
    double x6 = x2 * x4;

    cout << "x mu 6 la: " << x6;

   return 0;
}