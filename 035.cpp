#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double n;
    cout << "Nhap n: ";
    cin >> n;

    double t = 1;
    int i = 1;

    while(i <= n )
    {
         t = t * i;
         i = i + 1;
    }

    cout << "t la: " << t;
    return 0;
}