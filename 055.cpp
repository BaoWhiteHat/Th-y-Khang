#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    int n;
    int t = 1;
    int i = 1;

    cout << "Nhap so nguyen duong : ";
    cin >> n;

    while (i <= n) 
    {
        if (n % i == 0)
        {
            t = t * i;
        }
        i += 2;
    }
    cout << "Uoc so le: " << t;
}