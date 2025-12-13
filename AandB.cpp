#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

const ll INF = 1E18;

void solve() {
    ll n; cin >> n;
    string s; cin >> s;
    vector<ll> pa, pb;
    for(ll i = 0; i < n; i++) {
        if(s[i] == 'a') {
            pa.push_back(i);
        } else {
            pb.push_back(i);
        }
    }
    const ll m = pa.size();
    const ll k = pb.size();
    ll best = INF;
    if(!pa.empty()) {
        ll cost = 0;
        ll l = pa[m / 2] - (m / 2);
        for(ll i = 0; i < m; i++) {
            cost += abs(pa[i] - l - i);
        }
        best = min(best, cost);
    }
    if(!pb.empty()) {
        ll cost = 0;
        ll l = pb[k / 2] - (k / 2);
        for(ll i = 0; i < k; i++) {
            cost += abs(pb[i] - l - i);
        }
        best = min(best, cost);
    }
    cout << best << endl;
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