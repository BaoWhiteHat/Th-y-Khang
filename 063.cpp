#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cout << "Nhap so nguyen duong : ";
    cin >> n;

    int T = 1;
    int t = n;

    while (t != 0)
    {
        int dv = t % 10;
        if (dv % 2 != 0)
        {
            T = T * dv;
        }
        t = t / 10;
    }
    cout << "Tich cac chu so le : " << T;
}