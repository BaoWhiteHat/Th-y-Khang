#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n;
    int dem = 0;
    int i = 2;

    cout << "Nhap so nguyen duong : ";
    cin >> n;

    while (i <= n)
    {
        if (n % i == 0)
        {
            dem++;
        }
        i += 2;
    }
    cout << "Uoc so chan: " << dem;
    return 0;
}