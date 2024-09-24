#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float n;
    cout << "Nhap n : ";
    cin >> n;

    int att = -1;
    int at = 3;
    int i = 2;
    int ahh = at;

    while (i <= n)
    {
    
        ahh = 5 * at + 6 * att;
        i++;
        att = at;
        at = ahh;

    }
    cout << ahh;
}