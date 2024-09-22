#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n;
    int s = 0;
    int i = 1;

    cout << "Nhap so nguyen duong : ";
    cin >> n;

    while(i < n)
    {
        if (n % i == 0)
        {
            s += i;
        }
        i += 1;
    }
    cout << "Uoc so chan : " << s;
}