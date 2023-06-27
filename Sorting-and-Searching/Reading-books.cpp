#include <bits/stdc++.h>
#define ll long long
#define next '\n'
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    int n;
    cin >> n;
    ll time[n];
    ll sum = 0;
    ll best = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> time[i];
        sum += time[i];
        best = max(best, time[i]);
    }
    cout << max(2 * best, sum);
 
    return 0;
}
