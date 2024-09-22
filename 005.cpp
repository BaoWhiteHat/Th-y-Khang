#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    const double PI = 3.14;

    double r;
    cout << "Nhap r: ";
    cin >> r;

    double V = 4 * PI * pow(r,3) / 3;
    cout << "The tich la: " << V;

    return 0;
}