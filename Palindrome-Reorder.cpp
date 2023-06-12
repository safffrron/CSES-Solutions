#include <iostream>
using namespace std;
 
int main()
{
    int ar[26] = {0}, odd = 0, index;
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        for (char ch = 'A'; ch <= 'Z'; ch++)
        {
            if (s[i] == ch)
            {
                int l = ch - 65;
                ar[l]++;
            }
        }
    }
    for (int i = 0; i < 26; i++)
    {
        if (ar[i] % 2 == 1)
        {
            odd++;
            index = i;
        }
    }
    if (odd >= 2)
    {
        cout << "NO SOLUTION";
    }
    else if (odd == 1)
    {
        for (char ch = 'A'; ch <= 'Z'; ch++)
        {
            if (ch - 65 == index)
            {
                continue;
            }
            for (int i = 1; i <= ar[ch - 65] / 2; i++)
            {
                cout << ch;
            }
        }
        for (int i = 1; i <= ar[index]; i++)
        {
            char b = index + 65;
            cout << b;
        }
        for (char ch = 'Z'; ch >= 'A'; ch--)
        {
            if (ch - 65 == index)
            {
                continue;
            }
            for (int i = 1; i <= ar[ch - 65] / 2; i++)
            {
                cout << ch;
            }
        }
    }
    else
    {
        for (char ch = 'A'; ch <= 'Z'; ch++)
        {
 
            for (int i = 1; i <= ar[ch - 65] / 2; i++)
            {
                cout << ch;
            }
        }
 
        for (char ch = 'Z'; ch >= 'A'; ch--)
        {
 
            for (int i = 1; i <= ar[ch - 65] / 2; i++)
            {
                cout << ch;
            }
        }
    }
}
