#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double n;
    cout << "n la: ";
    cin >> n;

    int s = 0;
    int i = 1;

    while(i <= n)
    {
        s += (double)pow(i,4);
        i++;
    }

    cout << "S la: " << s;
    return 0;
}