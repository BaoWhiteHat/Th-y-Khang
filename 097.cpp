#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float n;
    cout << "Nhap n : ";
    cin >> n;

    float x;
    cout << "Nhap x : ";
    cin >> x;

    float s = 0;
    int t = 1;
    int i = 1;

    while (i <= n)
    {
        t = t * x;
        s = sqrt(t + s);
        i++;
    }
    cout << s;
}