#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

const int mod = 1e9 + 7;

void solve() {
    int k, n;
    cin >> n >> k;
    vector<int> arr(n);
    vector<int> ans(n - k + 1);
    multiset<int> s;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < k; i++) {
        s.insert(arr[i]);
    }

    auto itr = s.begin();
    advance(itr, k / 2);

    for (int i = 0; i <= n - k; i++) {
        if (k % 2 == 0) {
            auto it1 = itr;
            auto it2 = prev(itr);
            ans[i] = min(*it1, *it2);
        } else {
            ans[i] = *itr;
        }

        if (i + k < n) {
            s.insert(arr[i + k]);
            if (arr[i + k] < *itr) {
                itr--;
            }
        }

        if (arr[i] <= *itr) {
            itr++;
        }

        s.erase(s.find(arr[i]));
    }

    for (auto i : ans) {
        cout << i << " ";
    }
    cout << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
