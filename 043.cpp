#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double n;
    cout << "Nhap n: ";
    cin >> n;

    double s = 0;
    double i = 1;

    while (i <= n)
    {
        s += (float) 1/ (i * (i + 1) * (i + 2));
        i++;
    }

    cout << "S la: " << s;
    return 0;
    
}