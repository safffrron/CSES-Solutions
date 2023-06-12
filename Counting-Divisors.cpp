
#include <cmath>
#include <iostream>
using namespace std;
 
int countdiv(int n)
{
    int count = 2;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            count += 2;
        }
        if (i == sqrt(n))
        {
            count--;
        }
    }
    return count;
}
 
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        int d = countdiv(x);
        if (x == 1)
            d--;
        cout << d << '\n';
    }
 
    return 0;
}
