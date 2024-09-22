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

    while(i <= n)
    {
         s += i;
         i++;
    }

    cout << "S la: " << s;
    return 0;
}