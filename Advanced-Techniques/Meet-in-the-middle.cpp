#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

const int mod = 1e9 +7;
void print_arr(vector<int> arr)
{
    for(auto i : arr)
    {
        cout<<i<<" ";
    }
    cout<<endl;
}
vector<ll> subset_sum(vector<ll> arr , ll a , ll b)
{
    ll n = (b-a);
    vector<ll> ans ;
    for (ll i = 0; i < (1 << n); i++)
    {
        ll sum = 0;
        for (ll j = 0; j < n; j++)
        {
            if (i & (1 << j))
            {
                sum += arr[j+a];
            }
        }
        ans.push_back(sum);
    }
    return ans;
}

void solve()
{
    ll n , x ;
    cin>>n>>x;
    vector<ll> arr(n);
    
    for(ll i=0 ; i< n ; i++) cin>>arr[i];
    
    vector<ll> a = subset_sum(arr,0,n/2);
    vector<ll> b = subset_sum(arr,n/2,n);
    //a.push_back(0);
    //b.push_back(0);
    
    //print_arr(a);
    //print_arr(b);
    sort(a.begin() , a.end());
    sort(b.begin() , b.end());
    
    
    ll ans = 0;
	for (ll i : a) {
		auto low = lower_bound(b.begin(), b.end(), x - i);
		auto high = upper_bound(b.begin(), b.end(), x - i);
		ll start_index = low - b.begin();
		ll end_index = high - b.begin();
		ans += end_index - start_index;
	}

	cout << ans << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    //input test cases
    int t=1;
    //cin>>t;
    while(t--)
    {
        solve();
    }
    
    return 0;
} 
