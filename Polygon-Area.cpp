#include <bits/stdc++.h>
using namespace std;
int main()
{
 
    int n;
    cin >> n;
    long long x[n], y[n];
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
        cin >> y[i];
    }
 
    long long area = 0;
 
    for (int i = 0; i < n; i++)
    {
        int j = i + 1;
        if (i == (n - 1))
        {
            j = 0;
        }
 
        area += ((y[i] + y[j]) * (x[i] - x[j]));
    }
 
    long long a = abs(area);
    cout << a << '\n';
 
    return 0;
}
