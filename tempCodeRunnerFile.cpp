#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float x;
    cout << "Nhap x : ";
    cin >> x;

    int n;
    cout << "Nhap n : ";
    cin >> n;

    float s = 0;
    int t = 1;
    int i = 1;
    int dau = 1;

    while(i <= n)
    {
        t = t * x;
        s = s + dau * t;
        i++;
        dau = -dau;
    }
    cout << s;
}