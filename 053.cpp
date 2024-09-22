#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n;
    cout << "Nhap so nguyen duong : ";
    cin >> n;

    // Uoc so chan
    int i = 1;

    while(i <= n) 
    {
        if (n % i == 0) 
        {
            cout << i;
        }

        i += 2;
    }
    return 0;
}