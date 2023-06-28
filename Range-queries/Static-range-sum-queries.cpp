#include <bits/stdc++.h>
#define ll long long
#define next '\n'
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    int n, q;
    cin >> n >> q;
    int ar[n];
    ll sum[n];
 
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
        if (i == 0)
        {
            sum[i] = ar[i];
        }
        else
        {
            sum[i] = sum[i - 1] + ar[i];
        }
    }
 
    for (int i = 1; i <= q; i++)
    {
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        cout << sum[b] - sum[a] + ar[a] << next;
    }
 
    return 0;
}
