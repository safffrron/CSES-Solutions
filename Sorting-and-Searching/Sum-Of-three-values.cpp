#include <bits/stdc++.h>
#define ll long long
#define next '\n'
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    int n, x;
    cin >> n >> x;
    vector<pair<int, int> > arr;
    for (int i = 1; i <= n; i++)
    {
        int a;
        cin >> a;
        pair<int, int> p;
        p.first = a;
        p.second = i;
        arr.push_back(p);
    }
    sort(arr.begin(), arr.end());
    for (int i = 0; i < n; i++)
    {
        int left, right;
        left = i + 1;
        right = n - 1;
        while (left < right)
        {
            int target;
            target = x - arr[i].first;
            if (arr[left].first + arr[right].first == target)
            {
                cout << arr[i].second << " " << arr[left].second << " "
                     << arr[right].second << next;
                return 0;
            }
            if (arr[left].first + arr[right].first < target)
            {
                left++;
            }
            else
            {
                right--;
            }
        }
    }
    cout << "IMPOSSIBLE" << next;
    return 0;
}
