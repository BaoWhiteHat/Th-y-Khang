#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double n;
    cout << "n la: ";
    cin >> n;

    double s = 1;
    double i = 1;

    while(i <= n)
    {
        s = s * (double) (1 + (1/pow(i,2)));
        i++;
    }

    cout << "S la: " << s;
    return 0;
}