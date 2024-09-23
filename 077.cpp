#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float n;
    cout << "Nhap n : ";
    cin >> n;

    float k;
    cout << "Nhap k : ";
    cin >> k;

    float s;
    int i = 1;

    while (i <= n)
    {
        s = s + pow(i, k);
        i++;
    }
    cout << "Ket qua : " << s;
}