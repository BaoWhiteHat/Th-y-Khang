#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double n;
    cout << "Nhap n: ";
    cin >> n;

    double s = 0;
    int i = 1;

    while(i <= n )
    {
         s += (float)i / (i  + 1);
         i = i + 1;
    }

    cout << "S la: " << s;
    return 0;
}