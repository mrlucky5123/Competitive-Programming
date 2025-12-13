#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    if (n == 1)
    {
        cout << 1 << endl;
        return 0;
    }

    if (n < 4)
    {
        cout << "NO SOLUTION" << endl;
        return 0;
    }
    if (n == 4)
    {
        cout << "2 4 1 3" << endl;
        return 0;
    }
    vector<long long> ans(n);
    long long max = n;
    long long min = 1;
    for (long long i = 0; i < n; i += 2)
    {
        ans[i] = max;
        max--;
    }

    for (long long i = (n % 2 == 0 ? n - 1 : n - 2); i >= 1; i -= 2)
    {
        ans[i] = min;
        min++;
    }

    for (long long i = 0; i < n; i++)
    {
        cout << ans[i];
        if (i < n - 1)
            cout << " ";
    }
    return 0;
}