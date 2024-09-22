#include <iostream>
#include<cmath>
using namespace std;
int main ()
{
    int n;
    cout << "Nhap so nguyen duong: ";
    cin >> n;

    int dem = 0;
    int t = n;

    while (t != 0) 
    {
        int dv = t % 10;

        if (dv % 2 != 0 )
        {
            dem++;
        }
        t = t / 10;
    }
    cout << "So luong chu so le : " << dem;
}