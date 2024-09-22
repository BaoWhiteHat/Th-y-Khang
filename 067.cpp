#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cout << "Nhap so nguyen duong : ";
    cin >> n;

    int flag = 0;
    int t = n;

    while (t != 0)
    {
        int dv = t % 10;
        if (dv % 2 != 0)
        {
            flag = 1;
        }
        t = t / 10;
    }
    if (flag == 1)
    {
        cout << "Ton tai chu so le";
    }
    else
        cout << "Ko ton tai chu so le";
}