#include <iostream>
using namespace std;
 
int main()
{
    long n, sum1 = 0, sum2 = 0, l = 0, m = 0;
    cin >> n;
    long ar1[n], ar2[n];
    for (long i = n; i > 0; i--)
    {
        if (sum1 >= sum2)
        {
            sum2 += i;
            ar2[l] = i;
            l++;
        }
        else
        {
            sum1 += i;
            ar1[m] = i;
            m++;
        }
    }
    if (sum1 == sum2)
    {
        cout << "YES" << endl;
        cout << m << endl;
        for (long i = 0; i < m; i++)
        {
            cout << ar1[i] << " ";
        }
        cout << endl;
        cout << l << endl;
        for (long i = 0; i < l; i++)
        {
            cout << ar2[i] << " ";
        }
        cout << endl;
    }
    else
    {
        cout << "NO";
    }
}
