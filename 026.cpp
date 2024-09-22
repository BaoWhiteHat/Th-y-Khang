#include<iostream>
#include<cmath>
using namespace std;
int main()
{
     double a;
    cout << "a la: ";
    cin >> a;

    double b;
    cout << "b la: ";
    cin >> b;

    a = a + b;
    b = a - b;
    a = a - b;

    cout << "a sau doi = " << a << '\n';
    cout << "b sau doi = " << b << '\n';

    return 0;
}