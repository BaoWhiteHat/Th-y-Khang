#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n;
    cout << "Nhap so nguyen duong : ";
    cin >> n;

    int dem = 0;
    int i = 1;

    while ( i <= n) 
    {
        if ( n % i == 0) 
        {
            dem++;
           
        }
        i++;
    }
    cout << "Tong cac uoc so la : " << dem;
    return 0;
}