#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n, a, b;
    cin >> n;
    string ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
 
        int ch1 = 2 * a - b, ch2 = 2 * b - a;
        if ((ch1 % 3 == 0 && ch2 % 3 == 0) && (ch1 >= 0 && ch2 >= 0))
        {
            ar[i] = "YES";
        }
        else
        {
            ar[i] = "NO";
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << ar[i] << endl;
    }
    return 0;
}
