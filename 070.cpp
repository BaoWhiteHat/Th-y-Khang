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
    int i = 2;

    while(i <= 2*n)
    {
        t *= pow(x, 2);
        s = s + t;
        i = i + 2;
    }
    cout << s;
}