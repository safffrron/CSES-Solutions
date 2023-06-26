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
    int weight[n];
    bool gotit[n];
    for (int i = 0; i < n; i++)
    {
        cin >> weight[i];
        gotit[i] = false;
    }
 
    sort(weight, weight + n, greater<int>());
 
    int j = n - 1, count = 0;
 
    for (int i = 0; i < j; i++)
    {
        if (weight[i] + weight[j] <= x)
        {
            count++;
            gotit[i] = true;
            gotit[j] = true;
            j--;
        }
        else
        {
            count++;
            gotit[i] = true;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (!gotit[i])
        {
            count++;
            break;
        }
    }
    cout << count;
 
    return 0;
}
