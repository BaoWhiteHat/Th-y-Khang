#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double n;
    cout << "n la: ";
    cin >> n;

    double s = 0;
    double i = 1;

    while(i <= n)
    {
        s += (double)pow(i,3);
        i++; 
    }

    cout << "S la: " << s;
    return 0;
}