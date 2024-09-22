#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int n;
    cout << "n la: ";
    cin >> n;
    int i = 1;
    
    while(i <= n)
    {
        if ( n % i == 0)
        {
        cout << setw(4) << i;
        }
        i++;
    }
    
    cout << endl;        
     return 0;
}