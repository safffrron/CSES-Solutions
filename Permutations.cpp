#include <iostream>
 
using namespace std;
int main()
{
    long long n;
    cin >> n;
 
    if (n < 4 && n > 1)
    {
        cout << "NO SOLUTION";
    }
    else
    {
        for (long i = 1; i <= n; i++)
        {
            if (i % 2 == 0)
            {
                cout << i << " ";
            }
        }
        for (long i = 1; i <= n; i++)
        {
            if (i % 2 == 1)
            {
                cout << i << " ";
            }
        }
    }
 
    return 0;
}
