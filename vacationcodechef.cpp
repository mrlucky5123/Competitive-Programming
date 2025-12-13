#include <bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, m;
    cin >> n >> m;
    vector<vector<ll>> a(n + 1, vector<ll>(m + 1, 0));
    for (ll i = 1; i <= n; i++)
    {
        for (ll j = 1; j <= m; j++)
        {
            cin >> a[i][j];
            if (a[i][j] == 0)
                a[i][j] = 1;
            else
                a[i][j] = 0;
        }
    }

    vector<vector<ll>> pre(n + 1, vector<ll>(m + 1, 0));
    for (ll i = 1; i <= n; i++)
    {
        for (ll j = 1; j <= m; j++)
        {
            pre[i][j] = pre[i - 1][j] + pre[i][j - 1] - pre[i - 1][j - 1] + a[i][j];
        }
    }

    ll q;
    cin >> q;
    ll ans = 0, cnt = 0;
    while (q--)
    {
        ll x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        cnt = pre[x2][y2] - pre[x2][y1 - 1] - pre[x1 - 1][y2] + pre[x1 - 1][y1 - 1];
        if (cnt == 0)
        {
            ans = 1;
        }
        else
        {
            ans = 0;
        }
        cout << ans << endl;
    }
    return 0;
}