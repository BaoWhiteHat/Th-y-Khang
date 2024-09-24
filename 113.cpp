#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float n;
    cout << "Nhap n : ";
    cin >> n;

    int at = 2;
    int i = 2;
    int ahh = at;

    while (i <= n)
    {
        ahh = at + 2 * i + 1;
        i++;
        at = ahh;
    }
    cout << ahh;
}