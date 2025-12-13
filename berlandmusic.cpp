#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll n; cin >> n;
    vector<ll> p(n);
    for(auto& i : p) cin >> i;

    string s; cin >> s;
    vector<pair<ll,ll>> disliked, liked;
    for(ll i = 0; i < n; i++) {
        if(s[i] == '0') {
            disliked.push_back({p[i], i});
        } else {
            liked.push_back({p[i], i});
        }
    }
    
    sort(disliked.begin(), disliked.end());
    sort(liked.begin(), liked.end());

    vector<ll> q(n);
    for(ll i = 0; i < disliked.size(); i++) {
        ll original_idx = disliked[i].second;
        q[original_idx] = i + 1;
    }

    ll start = disliked.size() + 1;
    for(ll i = 0; i < liked.size(); i++) {
        ll original_idx = liked[i].second;
        q[original_idx] = start + i;
    }

    for(auto& i : q) {
        cout << i << " ";
    }
    cout << endl;
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