#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
    int n;
    cout << "Nhap  so nguyen duong : ";
    cin >> n;

    int t = 1;
    int i = 1;

    while( i <= n) 
    {
        if(n % i == 0) 
        {
            t = (float)t * i;
        }
        i = i + 1;
    }

    cout << "Tong cac uoc so la: " << t;
}