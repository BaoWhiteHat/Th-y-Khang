#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cout << "Nhap n : ";
    cin >> n;

    float s = 0;
    float m = 0;
    int i = 1;
    int dau = 1;

    while (i <= n )
    {
        m = m + i;
        s = s + (float)dau / m;
        i++;
        dau = -dau;
    }
    cout << s;
}