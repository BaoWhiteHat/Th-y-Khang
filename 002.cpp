#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    const double PI = 3.14;

    int r;
    cout << " Enter Radius: ";
    cin >> r;

    float s = PI * pow(r,2);
    cout << "Area is equal: " << s;

    return 0;

}