#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float x;
    cout << "Nhap x : ";
    cin >> x;

    int n;
    cout << "Nhap n : ";
    cin >> n;

    float s = 1 - x;
    int t = x;
    int m = 1;
    int i = 3;
    int dau = 1;

    while (i <= 2*n + 1)
    {
        t = t * x * x;
        m = m * i * (i - 1);
        s = s + dau * (float)t / m;
        i += 2;
        dau = -dau;
    }
    cout << s;
}