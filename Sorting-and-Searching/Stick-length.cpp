#include <bits/stdc++.h>
#define ll long long
#define end '\n'
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n;
    cin >> n;
    ll ar[n];

    for (ll i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    sort(ar, ar + n);
    ll median = ar[n / 2];
    ll cost = 0;
    for (ll i = 0; i < n; i++)
    {
        cost += abs(ar[i] - median);
    }
    cout << cost;
    return 0;
}
