#include <bits/stdc++.h>
#define ll long long
#define end '\n'
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    int n, x;
    cin >> n >> x;
    int arr[n];
    map<int, int> mp;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
 
    for (int i = 0; i < n; i++)
    {
        if (mp.count(x - arr[i]) == 0)
        {
            mp[arr[i]] = i;
        }
        else
        {
            cout << mp[x - arr[i]] + 1 << " " << i + 1;
            return 0;
        }
    }
    cout << "IMPOSSIBLE";
 
    return 0;
}
