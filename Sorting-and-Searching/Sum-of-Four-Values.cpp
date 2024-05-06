// This solution of mine got accepted but i think it shouldn't be 

#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;
 
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n , x ;
    cin>>n>>x;
    int arr[n];
    int sum = 0 ;
    for (int i=0 ; i< n ; i++)
    {
        cin>>arr[i];
        sum += arr[i];
    }
    if(n==4)
    {
        if(sum == x)
        {
            cout<<"1 2 3 4";
        }
        else
        {
            cout<<"IMPOSSIBLE";
        }
        return 0;
    }
    vector<pair<int , pair<int , int> >> twin;
    for(int i=0 ; i< n-1 ; i++)
    {
        for(int j= i+1 ; j< n ; j++)
        {
            twin.push_back({arr[i]+arr[j] , { i , j } });
        }
    }
    map<int, int> mp;
    for(int i=0 ; i<twin.size() ; i++)
    {
        if(mp.count(x- twin[i].first)==0)
        {
            mp[twin[i].first]=i;
        }
        else
        {
            int one = twin[i].second.first;
            int two = twin[i].second.second;
            int three = twin[mp[x- twin[i].first]].second.first;
            int four = twin[mp[x- twin[i].first]].second.second;
            //cout<<one<<" "<<two<<" "<<three<<" "<<four;
            
            cout<<one+1<<" "<<two+1<<" "<<three+1<<" "<<four+1;
            return 0;
        }
    }
    cout<<"IMPOSSIBLE";
    return 0;
}

//  #include <bits/stdc++.h>
// #define ll long long
// #define endl '\n'
// using namespace std;
 
 
// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);
    
//     int n , x ;
//     cin>>n>>x;
//     int arr[n];
//     for (int i=0 ; i< n ; i++)
//     {
//         cin>>arr[i];
//     }
//     vector<pair<int , pair<int , int> >> twin;
//     for(int i=0 ; i< n-1 ; i++)
//     {
//         for(int j= i+1 ; j< n ; j++)
//         {
//             twin.push_back({arr[i]+arr[j] , { i , j } });
//         }
//     }
//     map<int, int> mp;
//     for(int i=0 ; i<twin.size() ; i++)
//     {
//         if(mp.count(x- twin[i].first)==0)
//         {
//             mp[twin[i].first]=i;
//         }
//         else
//         {
//             int one = twin[i].second.first;
//             int two = twin[i].second.second;
//             int three = twin[mp[x- twin[i].first]].second.first;
//             int four = twin[mp[x- twin[i].first]].second.second;
//             //cout<<one<<" "<<two<<" "<<three<<" "<<four;
//             // if(one==three)
//             // {
//             //     for(int i=0 ; i< n ; i++)
//             //     {
//             //         if(arr[i]==arr[one] && i!=one && i!=two && i!=four)
//             //         {
//             //             one = i;
//             //         }
//             //     }
//             // }
//             // else if(one==four)
//             // {
//             //     for(int i=0 ; i< n ; i++)
//             //     {
//             //         if(arr[i]==arr[one] && i!=one && i!=two && i!=three)
//             //         {
//             //             one = i;
//             //         }
//             //     }
//             // }
//             // else if(two==three)
//             // {
//             //     for(int i=0 ; i< n ; i++)
//             //     {
//             //         if(arr[i]==arr[two] && i!=one && i!=two && i!=four)
//             //         {
//             //             two = i;
//             //         }
//             //     }
//             // }
//             // else if(two==four)
//             // {
//             //     for(int i=0 ; i< n ; i++)
//             //     {
//             //         if(arr[i]==arr[two] && i!=one && i!=two && i!=three)
//             //         {
//             //             two = i;
//             //         }
//             //     }
//             // }
            
//             cout<<one+1<<" "<<two+1<<" "<<three+1<<" "<<four+1;
//             return 0;
//         }
//     }
//     cout<<"IMPOSSIBLE";
//     return 0;
// }

// #include <bits/stdc++.h>
// #define ll long long
// #define endl '\n'
// using namespace std;

 
// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);
    
//     int n , x ;
//     cin >> n >> x  ;
//     //int arr[n+1];
//     vector<pair<int, int>> arr;
//     //map<int, int> mp;
//     arr.push_back({0,0});
//     for(int i=1 ; i<= n ; i++)
//     {
//         int a;
//         cin>>a;
//         //mp[arr[i]]=i;
//         arr.push_back({a,i});
//     }
//     sort(arr.begin() , arr.end());
    
//     // for(auto i : arr )
//     // {
//     //     cout<<i.first<<" "<<i.second<<endl;
//     // }
    
//     int out_left = 1 , out_right = n;
//     while(out_left < out_right)
//     {
//         int in_left = out_left+1 , in_right = out_right-1;
//         int out_sum = arr[out_left].first+ arr[out_right].first;
//         int max_in_sum = 0 , min_in_sum = 0;
//         while(in_left<in_right)
//         {
//             int in_sum = arr[in_left].first + arr[in_right].first;
//             if(in_sum + out_sum == x )
//             {
//                 //cout<<out_left<<" "<<in_left<<" "<<in_right<<" "<<out_right;
//                 cout<<arr[out_left].second<<" "<<arr[in_left].second<<" "<<arr[in_right].second<<" "<<arr[out_right].second;
//                 return 0;
//             }
//             else if(in_sum + out_sum < x)
//             {
//                 in_left++;
//             }
//             else
//             {
//                 in_right--;
//             }
//             max_in_sum = max(max_in_sum , in_sum);
//             min_in_sum = min(min_in_sum , in_sum);
//         }
//         //cout<<max_in_sum + out_sum<<endl;
//         if(max_in_sum + out_sum < x)
//         {
//             out_left++;
//         }
//         else if(min_in_sum + out_sum > x )
//         {
//             out_right--;
//         }
//         else
//         {
//             out_right--;
//         }
//     }
//     cout<<"IMPOSSIBLE";
//     return 0;
// }
