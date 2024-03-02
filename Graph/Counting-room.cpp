#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std ;

void dfs(int row, int col, int h, int w, vector<vector<int>> &visited, vector<vector<char>> &arr) {
    if (row < 0 || row >= h || col < 0 || col >= w || visited[row][col] || arr[row][col] == '#') {
        return;
    }
    
    visited[row][col] = 1;
    dfs(row + 1, col, h, w, visited, arr);
    dfs(row, col + 1, h, w, visited, arr);
    dfs(row - 1, col, h, w, visited, arr);
    dfs(row, col - 1, h, w, visited, arr);
}


int main() 
{
    int h , w , ans =0 ;
    cin>>h>>w;
    vector<vector<int> > visited(h,vector<int>(w,0));
    vector<vector<char> > arr(h,vector<char>(w));
    for(int i = 0 ; i<h ; i++)
    {
        for(int j = 0 ; j<w ; j++)
        {
            cin>>arr[i][j];
        }
    }
    
    for(int i = 0 ; i<h ; i++)
    {
        for(int j = 0 ; j<w ; j++)
        {
            if(arr[i][j] == '#')
            {
                visited[i][j]=1;
                continue;
            }
            if(visited[i][j])
            {
                continue;
            }
            dfs(i,j,h,w,visited, arr);
            ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}
