#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double doC;
    cout << "Do C: ";
    cin >> doC;

    double F = 9 * doC /5 + 32;
    cout << "Chuyen do C sang do F la: " << F;

    return 0;
}