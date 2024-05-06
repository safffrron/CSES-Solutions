#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;
 
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n ;
    cin >> n ;
    int arr[n] , lowest = INT_MAX , ans[n];
    for(int i=0 ; i<n ; i++)
    {
        cin>>arr[i];
        
        if(arr[i]<=lowest)
        {
            ans[i]=-1;
            lowest = arr[i];
        }
        else
        {
            if(arr[i] > arr[i-1])
            {
                ans[i] = i-1;
            }
            else
            {
                int temp = ans[i-1], k=i-1;
                while(arr[temp]>arr[i])
                {
                    temp=ans[k];
                    k=ans[k];
                }
                ans[i]=temp;
            }
        }
    }
    for(auto i : ans)
    {
        cout<<i+1<<" ";
    }
    return 0;
}
