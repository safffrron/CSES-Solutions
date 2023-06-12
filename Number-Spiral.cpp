#include <iostream>
using namespace std;
 
int main()
{
    long i, j, t;
    cin >> t;
    for (long long k = 1; k <= t; k++)
    {
        cin >> i >> j;
        long long max = (i > j) ? i : j;
        long long lastodd = max * 2 - 3;
        long long tillsum = ((lastodd + 1) / 2) * ((lastodd + 1) / 2);
        if (max % 2 == 0)
        {
            if (i == max)
            {
                cout << tillsum + (max * 2 - j);
            }
            else
            {
                cout << tillsum + i;
            }
        }
        else
        {
            if (i == max)
            {
                cout << tillsum + j;
            }
            else
            {
                cout << tillsum + (max * 2 - i);
            }
        }
        cout << endl;
    }
}
