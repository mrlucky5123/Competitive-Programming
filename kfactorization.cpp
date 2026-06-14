#include <bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;

    vector<ll> a;
    ll num = n;
    ll need = k;
    for (ll i = 2; i * i <= num && k > 1; i++)
    {
        while(num % i == 0 && k > 1) {
            a.push_back(i);
            num /= i;
            k--;
        }
    }
    if(num > 1) a.push_back(num);
    if (a.size() != need)
    {
        cout << -1 << endl;
        return;
    }
    for (auto &i : a)
        cout << i << " ";
    cout << endl;
}

// void solve() {
//     ll n, k; cin >> n >> k;

//     vector<ll> factors;
//     ll num = n;
//     for(ll i = 2; i * i <= n; i++) {
//         if(num % i == 0) {
//             while(num % i == 0) {
//                 factors.push_back(i);
//                 num /= i;
//             }
//         }
//     }
//     if(num > 1) factors.push_back(num);
//     if(factors.size() < k) {
//         cout << -1 << endl;
//         return;
//     }

//     for(ll i = 0; i < k-1; i++) cout << factors[i] << " ";

//     ll last = 1;

//     for(ll i = k-1; i < factors.size(); i++) last *= factors[i];

//     cout << last << endl;
// }

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}