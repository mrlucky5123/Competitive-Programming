#include <bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    vector<ll> period;
    vector<ll> vis(101, 0);

    for (auto x : a)
    {
        if (!vis[x])
        {
            vis[x] = 1;
            period.push_back(x);
        }
    }

    if (period.size() > k)
    {
        cout << -1 << endl;
        return;
    }

    while (period.size() < k)
    {
        period.push_back(1);
    }

    vector<ll> ans;

    cout << n * k << endl;

    for (ll i = 0; i < n; i++)
    {
        for (auto x : period)
        {
            cout << x << " ";
        }
    }
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}