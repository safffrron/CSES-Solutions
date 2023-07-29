#include <bits/stdc++.h>
#define ll long long
#define next '\n'
using namespace std;

const int mod = 1e9 + 7;

int countWays(int x, int * coins ,int n) 
{
    
    int solution[x+1];
    fill_n( solution, x+1, 0);
    solution[0] = 1;

    for (int i = 1; i <= x; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            if (coins[j] <= i) 
            {
                solution[i] = (solution[i] + solution[i - coins[j]]) % mod;
            }
        }
    }

    return solution[x];
}

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, x;
    cin >> n >> x;

    int coins[n];
    for (int i = 0; i < n; i++) 
    {
        cin >> coins[i];
    }

    cout << countWays(x, coins,n);

    return 0;
}
