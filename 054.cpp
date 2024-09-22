#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n;
    cout << "Nhap so nguyen duong : ";
    cin >> n;

    int s = 0;

    // Uoc so chan
    int i = 2;

    while (i <= n)
    {
        if (n % i == 0)
        {
            s += i;
        }
        i += 2;
    }
    cout << "Uoc so chan : " << s;
}