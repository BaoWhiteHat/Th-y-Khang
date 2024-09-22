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

    double temp = a;
    a = b;
    b = temp;

    cout << "a sau doi = " << a << '\n';
    cout << "b sau doi = " << b << '\n';

    return 0;
}