#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    const double PI = 3.14;

    double r;
    cout << "Radius is: ";
    cin >> r;

    double dientich = 4 * PI * r * r;
    cout << "dien tich la: " << dientich;

    return 0;
}