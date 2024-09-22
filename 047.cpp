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

    while( i <= n)
    {
        s += (float) (sqrt ( 1 + (1 / pow(i,2)) + (1/ pow(i + 1,2))));
        i++;
    }
    cout << "s la: " << s;
    return 0;
}