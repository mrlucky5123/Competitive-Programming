#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

void solve() {
    ll n, k;
    cin >> n >> k;
    vector<pair<ll, ll>> health(n); 
    for(ll i = 0; i < n; i++) {
        ll x;
        cin >> x;
        health[i] = {x, i+1};
    }
    for(ll i = 0; i < n; i++) {
        health[i].first %= k;
        if(health[i].first % k == 0) {
            health[i].first = k;
        }
    }

    sort(health.begin(), health.end(), [&](pair<ll, ll> a, pair<ll, ll> b){
        if(a.first != b.first)
            return a.first > b.first;
        return a.second < b.second;
    });

    for(auto it : health) {
        cout << it.second << " ";
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