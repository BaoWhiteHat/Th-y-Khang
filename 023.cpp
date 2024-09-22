#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cout << "So nguyen duyen n: ";
    cin >> n;

    double hc = (n / 10) % 10;
    cout << "Chu so hang chuc: " << hc;

    return 0;
}