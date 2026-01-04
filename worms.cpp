#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

// void solve() {
//     ll n; cin >> n;
//     vector<ll> a(n+1, 0), pre(n+1, 0);
//     for(ll i = 1; i <= n; i++) cin >> a[i];

//     for(ll i = 1; i <= n; i++) pre[i] = pre[i-1] + a[i];
    
//     ll m; cin >> m;
//     for(ll i =0; i < m; i++) {
//         ll q; cin >> q;

//         auto it = lower_bound(pre.begin()+1, pre.end(), q);
//         ll pile = it - pre.begin();

//         cout << pile << endl;
//     }
// }

ll bin_search(const vector<ll>& pre, ll q, ll n) {
    ll low = 1, high = n;
    while(low < high) {
        ll mid = (high - low)/2;
        if(pre[mid] >= q) {
            high = mid;
        } else {
            low = mid + 1;
        }
    } 
    return low;
}

void solve() {
    ll n; cin >> n;
    vector<ll> a(n+1), pre(n+1, 0);
    for(ll i = 1; i <= n; i++) {
        cin >> a[i];
    }
    ll m; cin >> m;
    for(ll i = 0; i < m; i++) {
        ll q; cin >> q;

        ll pile = bin_search(pre, q, n);

        cout << pile << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin >> t;
    while(t--) {
       solve();
    }
    return 0;
}