#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cout << "Nhap so nguyen duong : ";
    cin >> n;

    int s = 0;
    int t = 1;
    int i = 1;

    while (i <= n)
    {
        t = t * i;
        s = s + t;
        i = i + 1;
    }
    cout << s;
}