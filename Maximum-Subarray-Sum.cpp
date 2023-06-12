#include <iostream>
#include <cmath>
#include <climits>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    long long ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    long long sum = 0, best = LLONG_MIN;
    for (long long i = 0; i < n; i++)
    {
        sum = max(ar[i], ar[i] + sum);
        best = max(sum, best);
    }
    cout << best;
    return 0;
}
