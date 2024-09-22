#include<iostream>
#include<cmath>
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

    double P = 2 * n * r * sin(PI / n);
    cout << "Chu vi da giac deu la: " << P;

    return 0;
}