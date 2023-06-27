#include <bits/stdc++.h>
#define ll long long
#define next '\n'
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n,m;
    cin>>n>>m;
    
    multiset<int> price;
    
    for(int i=0;i<n;i++) 
    {
        int input;
        cin>>input;
        price.insert(input);
    }
    
    
    for(int i=0;i<m;i++)
    {
        int value;
        cin>>value;
        auto it= price.upper_bound(value);
        if(it == price.begin())
        {
            cout<<-1<<next;
        }
        else
        {
            it--;
            cout<<*it<<next;
            price.erase(it);
        }
    }

    return 0;
} 
