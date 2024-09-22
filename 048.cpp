#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double x;
    cout << "x la: ";
    cin >> x;

    double n;
    cout << "n la: ";
    cin >> n;

    double s = x;
    int i = 1;

    while( i <= n)
    {
        s *= (float) x + i;
        i++;  
    }

    cout << "S la: " << s;
    return 0; 
}