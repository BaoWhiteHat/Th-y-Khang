#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cout << "Nhap n: ";
    cin >> n;

    int x;
    cout << "Nhap x: ";
    cin >> x;

    float s = x;
    int t = x;
    int i = 3;

    while (i <= 2 * n + 1)
    {
        t = t * x * x;
        s = s + t;
        i = i + 2;
    }
    cout << s;
}