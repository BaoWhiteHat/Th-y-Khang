#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float x;
    cout << "Nhap x : ";
    cin >> x;

    float n;
    cout << "Nhap n : ";
    cin >> n;

    float s = -1;
    int t = 1;
    float m = 1;
    int i = 2;
    int dau = 1;

    while (i <= 2*n)
    {
        t = t * x * x;
        m = m * i * (i - 1);
        s = s + dau * (float)t / m;
        i += 2;
        dau = -dau;
    }

    cout << s;
}