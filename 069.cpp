#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cout << "Nhap n : ";
    cin >> n;

    int x;
    cout << "Nhap x: ";
    cin >> x;

    int s = 0;
    int t = 1;
    int i = 1;

    while (i <= n)
    {
        t = t * x;
        s = s + t;
        i = i + 1;
    }
    cout << s;
}