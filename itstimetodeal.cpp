#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n;
    cin >> n;
    vector<long long> a(n);
    for (long long i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    bool lying = false;
    bool allsame = true;
    for (long long i = 1; i < n; i++)
    {
        if (a[0] != a[i])
        {
            allsame = false;
        }
    }
    if (allsame)
    {
        cout << "YES" << endl;
        return;
    }

    for (long long i = 1; i < n; i++)
    {
        if (a[i] == a[i - 1] && a[i] == 0)
        {
            lying = true;
        }
    }

    if (lying)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}