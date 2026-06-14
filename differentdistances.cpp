#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

// void solve() {
//     ll n; cin >> n; 
//     vector<ll> x;

//     for(ll i = 1; i <= n; i++) {
//         x.push_back(i);
//     }
//     for(ll i = 1; i <= n; i++) {
//         x.push_back(i);
//     }
//     for(ll i = 2; i <= n; i++) {
//         x.push_back(i);
//     }
//     x.push_back(1);
//     for(ll i = 1; i <= n; i++) {
//         x.push_back(i);
//     }

//     for(auto& i : x) {
//         cout << i << " ";
//     }
//     cout << endl
// }

void solve() {
    ll n; cin >> n; 
    vector<ll> ans;

    auto go = [&] (ll x, ll y) {
        // xyyxyxxy
        ans.push_back(x);
        ans.push_back(y);
        ans.push_back(y);
        ans.push_back(x);
        ans.push_back(y);
        ans.push_back(x);
        ans.push_back(x);
        ans.push_back(y);
    };

    if(n&1) {
        // 311212312233
        ans.push_back(3);
        ans.push_back(1);
        ans.push_back(1);
        ans.push_back(2);
        ans.push_back(1);
        ans.push_back(2);
        ans.push_back(3);
        ans.push_back(1);
        ans.push_back(2);
        ans.push_back(2);
        ans.push_back(3);
        ans.push_back(3);

        for(ll i = 4; i <= n; i+=2) {
            go(i, i+1);
        }
    } else {
        for(ll i = 1; i <= n; i+=2) {
            go(i, i+1);
        }
    }

    for(auto& i : ans) {
        cout << i << " ";
    }
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t=1;
    cin >> t;
    while(t--) {
       solve();
    }
    return 0;
}