#include <bits/stdc++.h>
#define ll long long
#define en '\n'
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    string s;
    cin >> s;
 
    sort(s.begin(), s.end());
 
    vector<string> ans;
 
    do
    {
        ans.push_back(s);
    } while (next_permutation(s.begin(), s.end()));
 
    cout << ans.size() << en;
    for (string i : ans)
    {
        cout << i << en;
    }
    return 0;
}
