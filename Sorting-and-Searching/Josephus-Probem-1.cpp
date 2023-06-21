#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin >> n;
 
    deque<int> storage;
    for (int i = 1; i <= n; i++)
    {
        storage.push_back(i);
    }
 
    while (!storage.empty())
    {
 
        if (!storage.empty())
        {
            int child = storage.front();
            storage.pop_front();
            storage.push_back(child);
        }
 
        cout << storage.front() << " ";
        storage.pop_front();
    }
 
    return 0;
}
