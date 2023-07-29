#include <bits/stdc++.h>
#define ll long long
#define next '\n'
using namespace std;
 
int calculate(int x, int *coins, int *solution, int n)
{
    if (x == 0)
        return 0;
 
    if (x < 0)
        return 1e9;
 
    if (solution[x] != -1)
    {
        return solution[x];
    }
 
    int lowest = 1e9;
 
    for (int i = 0; i < n; i++)
    {
        int a = calculate(x - coins[i], coins, solution, n);
        lowest = min(lowest, a);
    }
 
    solution[x] = lowest + 1;
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
 
    sort(coins, coins + n);
 
    int solution[1000001];
    fill_n(solution, 1000001, -1);
 
    int ans = calculate(x, coins, solution, n);
 
    if (ans == 1e9 + 1)
    {
        cout << -1;
    }
    else
    {
        cout << ans;
    }
 
    return 0;
}
