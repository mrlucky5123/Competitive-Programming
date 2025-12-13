#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

void solve() {
    ll n, x;
    cin >> n >> x;
    vector<ll> arr(n);
    for(ll i = 0; i < n; i++) cin >> arr[i];

    vector<pair<ll, ll>> segments(n);
    for(ll i = 0; i < n; i++){
        segments[i] = {arr[i]-x, arr[i]+x};
    }

    ll ans = 0; 
    ll l = segments[0].first;
    ll r = segments[0].second;
    for(ll i = 1; i < n; i++) {
        l = max(l, segments[i].first);
        r = min(r, segments[i].second);
        if(l > r){
            ans++;
            l = segments[i].first;
            r = segments[i].second;
        }
    }
    cout << ans << endl;
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