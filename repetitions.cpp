#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    long long max_length = 1;
    long long curr_max = 1;
    for (long long i = 1; i < s.size(); i++)
    {
        if (s[i] == s[i - 1])
        {
            curr_max++;
            max_length = max(max_length, curr_max);
        }
        else
        {
            curr_max = 1;
        }
    }
    cout << max_length << endl;
    return 0;
}