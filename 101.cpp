#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Nhap n : ";
    cin >> n;

    float s = 0;
    float e;

    for (int i = 1; i <= n; ++i)
    {
        e = 1.0 / i;
        s += e;
    }

    cout  << s << endl; 
    return 0;
}
