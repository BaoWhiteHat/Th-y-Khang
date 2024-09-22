#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double n;
    cout << "Nhap n: ";
    cin >> n;

    double s = 0;
    int i = 2;

    while(i <= 2 * n)
    {
         s += (float)1/i;
         i = i + 2;
    }

    cout << "S la: " << s;
    return 0;
}