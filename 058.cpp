#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cout << "Nhap so nguyen duong : ";
    cin >> n;

    int s = 0;
    int t = n;

    while ( t != 0)
    {
        int dv = t % 10;
        s = s + dv;
        t = t / 10;
    }
    cout << s;
}