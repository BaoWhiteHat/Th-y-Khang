#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cout << "So nguyen duyen n: ";
    cin >> n;

    double ht = (n / 100) % 10;
    cout << "Chu so hang tram: " << ht;

    return 0;
}