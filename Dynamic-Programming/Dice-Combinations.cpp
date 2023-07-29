#include <bits/stdc++.h>
#define ll long long
#define next '\n'
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin>>n ;
    int mod = 1e9 +7;
    
    ll solution[1000000+1];
    
    solution[1]=1;
    solution[2]=2;
    solution[3]=4;
    solution[4]=8;
    solution[5]=16;
    solution[6]=32;
    
    
    for(int i=7;i<=n;i++)
    {
        solution[i]= (solution[i-1]+solution[i-2]+solution[i-3]+solution[i-4]+solution[i-5]+solution[i-6]) % mod;
    }
    
    cout<<solution[n];
    return 0;
} 
