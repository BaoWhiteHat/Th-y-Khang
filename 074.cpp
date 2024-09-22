#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float x;
    cout << "Nhap x: ";
    cin >> x;

    float n;
    cout << "Nhap n: ";
    cin >> n;

    float s = 0;
    int t = 1;
    int m = 1;
    int i = 1;

    while (i <= n)
    {
        t = t * x;
        m = m * i;
        s = s + (float)t / m;
        i = i + 1;
    }
    cout << s;
}