#include <bits/stdc++.h>
#define ll long long
#define end '\n'
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    //input test cases
    int n;
    cin >> n;
    int indexOf[n + 1];
    for (int i = 1; i <= n; i++)
    {
        int a;
        cin >> a;
        indexOf[a] = i;
    }
    int pos = 1, count = 1;
    for (int i = 1; i <= n; i++)
    {
        if (pos > indexOf[i])
        {
            count++;
        }
        pos = indexOf[i];
    }
    cout << count;
}
