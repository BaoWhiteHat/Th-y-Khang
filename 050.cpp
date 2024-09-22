#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int n;
    cout << "n la: ";
    cin >> n;
    int s = 0;
    int i = 1;

    while(i <= n)
    {
        if(n % i == 0)
        s = (float) s + i;
        i++;
    }
    cout << "Tong cac uoc so la: " << s;

}