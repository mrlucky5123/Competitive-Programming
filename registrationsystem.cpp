#include <bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    unordered_map<string, ll> registration_count;
    for(ll i = 0; i < n; i++) {
        string username;
        cin >> username;

        if(registration_count[username] == 0) {
            cout << "OK" << endl;
            registration_count[username] = 1;
        } else {
            cout << username << registration_count[username] << endl;
            registration_count[username]++;
        }
    }
    // ll num = 1;
    // for(const auto& entry : registration_count) {
    //     if(entry.second == 1) {
    //         cout << "OK" << endl;
    //     } else {
    //         cout << entry.first << to_string(num) << endl;
    //         num++;
    //         registration_count[entry.first]--;
    //     }
    // }


}

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