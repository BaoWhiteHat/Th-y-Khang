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

    float s = 1;
    int t = 1;
    int m = 1;
    int i = 2;

    while (i <= 2 * n)
    {
        t *= pow(x, 2);
        m = m * i * (i - 1);
        s = s + (float)t / m;
        i = i + 2;
    }
    cout << s;
}