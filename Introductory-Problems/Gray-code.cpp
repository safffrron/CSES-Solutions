#include <bits/stdc++.h>
#define ll long long
#define next '\n'
using namespace std;

vector<string> graycode(int n)
{
    vector<string> ans;
    
    if(n==1)
    {
        ans.push_back("0");
        ans.push_back("1");
        return ans;
    }
    
    vector<string> temp= graycode(n-1);
    
    for(int i=0;i<temp.size();i++)
    {
        ans.push_back('0' + temp[i]);
    }
    for(int i=temp.size()-1;i>=0;i--)
    {
        ans.push_back('1' + temp[i]);
    }
    
    return ans;
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin>>n;
    vector<string> result= graycode(n);
    
    for(auto i: result)
    {
        cout<<i<<next;
    }
    
    return 0;
}
