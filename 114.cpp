#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float n;
    cout << "Nhap n : ";
    cin >> n;

    int at = -2;
    int tt = 3;
    int pp = 7;
    int i = 2;
    int ahh = at;

    while(i <= n)
    {
        tt = tt * 3;
        pp = pp * 7;
        ahh = 5 * at + 2 * tt - 6 * pp + 12;
        i++;
        at = ahh;
    }
    cout << ahh;
}