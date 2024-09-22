#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double x, n;

    cout << "X la: ";
    cin >> x;

    
    cout << "n la: ";
    cin >> n;

    double t = 1;
    double i = 1;

    while(i <= n)
    {
        t = t * x;
        i++;
    }

    cout << "T la: " << t;
    return 0;
}