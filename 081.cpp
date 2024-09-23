#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    float x;
    cout << "Nhap x : ";
    cin >> x;

    float n;
    cout << "Nhap n : ";
    cin >> n;

    float s = 1 / x;
    int m = x;
    int i = 1;

    while (i <= n)
    {
        m = m * (x + i);
        s = s + (float)1 / m;
        i++;
    }
    cout << s;
}