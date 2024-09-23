#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float n;
    cout << "Nhap n: ";
    cin >> n;

    float s = 0;
    int t = 1;
    int i = 1;

    while (i <= n)
    {
        t = t * i;
        s = s + i * t;
        i = i + 1;
    }
    cout << s;
}