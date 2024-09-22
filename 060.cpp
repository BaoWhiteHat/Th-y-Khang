#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cout << "Nhap so nguyen duong : ";
    cin >> n;

    int tich = 1;
    int t = n;

    while (t != 0)
    {
        int dv = t % 10;
        tich = tich * dv;
        t = t / 10;
    }
    cout << "Tich cac chu so : " << tich;
}