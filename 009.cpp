#include<iostream>
#include <cmath>
using namespace std;
int main()
{
    const double PI = 3.14;

    double n;
    cout << "canh n la: ";
    cin >> n; 

    double r; 
    cout << "ban r kinh la: ";
    cin >> r;

    double S = ((1 * n * pow(r,2)) * sin(2*PI / n) / 2);
    cout << "Dien tich da giac deu la: " << S;  

    return 0;

}