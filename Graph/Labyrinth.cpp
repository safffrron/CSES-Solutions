#include<bits/stdc++.h>
using namespace std;

int main()
{
    int h , w ;
    cin>> h >> w ;
    pair<int, int> start , finish;
    string result="";
    vector<vector<bool>> visited(h,vector<bool>(w,false));
    vector<vector<char>> arr(h,vector<char>(w,' '));
    vector<vector<int>> previous(h,vector<int>(w,0));
    for(int i =0 ; i< h ; i++)
    {
        for(int j=0 ; j<w ; j++)
        {
            cin>>arr[i][j];
            if(arr[i][j]=='#')
            {
                visited[i][j]=true;
            }
            else if (arr[i][j]=='A')
            {
                start = {i,j};
            }
            else if (arr[i][j]=='B')
            {
                finish = {i,j};
            }
        }
    }
    
    vector<pair<int,int>> move = {{1,0},{0,1},{-1,0},{0,-1}};
    vector<char> what = {'D','R','U','L'};
    
    queue<pair<int,int>> q;
    q.push(start);
    visited[start.first][start.second]=true;
    while(!q.empty())
    {
        pair<int,int> curr = q.front();
        q.pop(); 
        for (int i=0 ; i<4;i++) 
        {
            int row = curr.first+move[i].first;
            int col = curr.second+move[i].second;
            if (row < 0 || row >= h || col < 0 || col >= w || visited[row][col] || arr[row][col] == '#') 
            {
                continue;
            }
            
            visited[row][col]=true;
            previous[row][col]= i ;
            q.push({row,col});
            
        }
    }
    
    if(visited[finish.first][finish.second])
    {
        cout<<"YES"<<endl;
        
        while (finish != start) 
        {
			int p = previous[finish.first][finish.second];
			result += what[p];
			
			finish = {finish.first - move[p].first, finish.second - move[p].second};
		}
        reverse(result.begin(),result.end());
        cout<<result.size()<<endl;
        cout<<result;
        
        
    }
    else
    {
        cout<<"NO";
    }
    
    
    return 0 ;
}
