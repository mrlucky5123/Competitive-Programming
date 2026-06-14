#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

vector<ll> spf(100001); // smallest prime factor

void buildspf() {
    for(ll i = 1; i <= 100000; i++) spf[i] = i;

    for(ll i = 2; i*i <= 100000; i++) {
        if(spf[i] == i) {
            for(ll j = i*i; j <= 100000; j += i) {
                if(spf[j] == j) spf[j] = i;
            }
        }
    }
}

pair<vector<pair<ll,ll>>, vector<pair<ll,ll>>> getSignature(ll x, ll k) {

    vector<pair<ll, ll>> sig, need;

    while(x > 1) {
        ll p = spf[x];
        ll cnt = 0;

        while(x % p == 0) {
            cnt++;
            x /= p;
        }

        cnt %= k;

        if(cnt == 0) continue;

        sig.push_back({p, cnt});
        need.push_back({p, k-cnt});
    }
    return {sig, need};
}


void solve() {
    ll n, k; cin >> n >> k;
    
    vector<ll> a(n);
    for(auto &i : a) cin >> i;
    
    map<vector<pair<ll,ll>>, ll> freq;

    ll ans = 0;

    for(auto x : a) {
        auto [sig, need] = getSignature(x, k);

        ans += freq[need];

        freq[sig]++;
    }
    cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    buildspf();
    long long t=1;
    // cin >> t;
    while(t--) {
       solve();
    }
    return 0;
}