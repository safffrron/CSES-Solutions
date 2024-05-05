#include <bits/stdc++.h>
#define ll long long
#define end '\n'
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    int n , x ,sum = 0 ,left=0 , right =0 ,count =0;
    cin>> n >> x ;
    int arr[n];
    for(int i=0 ; i<n ; i++)
    {
        cin>>arr[i];
    }
    
    while(right <= n )
    {
        if(sum < x)
        {
            sum+=arr[right];
            right++;
        }
        else if( sum == x )
        {
            count++;
            sum-=arr[left];
            left++;
        }
        else
        {
            sum-=arr[left];
            left++;
        }
    }
    cout<<count ;
}
