#include<iostream>
#include <cmath>
using namespace std;
int main()
{
    float x;
    cout << "Nhap x : ";
    cin >> x;

    float n;
    cout << "Nhap n: ";
    cin >> n;

    float s = 1;
    int t = 1;
    int i = 1;

    while(i <= n)
    {
        t = t * x;
        s = s + t;
        i++;
    }
    cout << "Ket qua : " << s;
}