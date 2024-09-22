#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cout << "Nhap so nguyen : ";
    cin >> n;

    int t = n;
    int lc = n % 10;

    while (t != 0) 
    {
        int dv = t % 10;
        if (dv < lc)
        {
            lc = dv;
        }
        t = t / 10;
    }
    cout << "Chu so nho nhat la : " << lc;
}