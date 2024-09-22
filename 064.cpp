#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cout << "Nhap so nguyen duong : ";
    cin >> n;

    int lc = n % 10;
    int t = n;
    
    while (t != 0)
    {
        int dv = t % 10;
        if (dv > lc)
        {
            lc = dv;
        }
        t = t / 10;
    }
    cout << "Chu so lon nhat : " << lc;
}