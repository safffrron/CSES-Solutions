#include <bits/stdc++.h>
#define ll long long
#define end '\n'
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    ll n, m, k;
    cin >> n >> m >> k;
    ll des_size[n], apart_size[m];
 
    for (ll i = 0; i < n; i++)
        cin >> des_size[i];
    for (ll i = 0; i < m; i++)
        cin >> apart_size[i];
 
    sort(des_size, des_size + n);
    sort(apart_size, apart_size + m);
 
    ll count = 0, i = 0, j = 0;
 
    while (i < n && j < m)
    {
 
        if (abs(des_size[i] - apart_size[j]) <= k)
        {
            i++;
            j++;
            count++;
        }
        else
        {
 
            if (des_size[i] - apart_size[j] > k)
            {
                j++;
            }
 
            else
            {
                i++;
            }
        }
    }
 
    cout << count;
    return 0;
}
