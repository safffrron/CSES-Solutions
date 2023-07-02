#include <bits/stdc++.h>
#define ll long long
#define next '\n'
using namespace std;

int board[11][11]={0};
int c=0;

bool isPossible(int n,int row , int col)
{
    //check current pos
    if(board[row][col]==2)
    {
        return false;
    }
    
    // check col
    for(int i=row-1;i>=0;i--)
    {
        if(board[i][col]==1)
        {
            return false;
        }
    }

    //check back diagonal 
    for(int i=row-1,j=col-1; i>=0 && j>=0; i--,j--)
    {
        if(board[i][j]==1)
        {
            return false;
        }
    }

    //check front diag
     for(int i=row-1,j=col+1; i>=0 && j<n; i--,j++)
    {
        if(board[i][j]==1)
        {
            return false;
        }
    }

    return true;

}

void place_row_wise(int n, int row)
{
    if(row==n)
    {
        //completed
        c++;
    }
    for(int j=0;j<n;j++)
    {
        if(isPossible(n,row,j))
        {
            board[row][j]=1;
            place_row_wise(n,row+1);
            board[row][j]=0;
        }
    }
    return;
}


void initial_setup()
{
    for(int i=0;i<8;i++)
    {
        for(int j=0;j<8;j++)
        {
            char c;
            cin>>c;
            if(c=='*')
            {
                board[i][j]=2;
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    //initialize the values i.e. the occupies places 
    initial_setup();
    //the board is now set
    
    //board visualizer
    /*
    for(int i=0;i<8;i++)
    {
        for(int j=0;j<8;j++)
        {
            cout<<board[i][j]<<" ";
        }
        cout<<endl;
    }
    */
    
    place_row_wise(8,0);
    
    cout<<c;
    
    return 0;
} 
