#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double x1;
    cout << "Toa do x1: ";
    cin >> x1;

    double y1;
    cout << "Toa do y1: ";
    cin >> y1;

    double x2;
    cout << "Toa do x2: ";
    cin >> x2;

    double y2;
    cout << "Toa do y2: ";
    cin >> y2;

    double x3;
    cout << "Toa do x3: ";
    cin >> x3;

    double y3;
    cout << "Toa do y3: ";
    cin >> y3;

    double a = sqrt(pow(x2 - x1,2) + pow(y2 - y1,2));

    double b = sqrt(pow(x3 - x2,2) + pow(y3 - y2,2));
    
    double c = sqrt(pow(x3 - x1,2) + pow(y3 - y1,2));

    double p = (a + b + c) / 2;

    double s = sqrt(p* (p-a) * (p-b) * (p-c));
    cout << "Dien tich tam giac la: " << s;

    return 0;
}