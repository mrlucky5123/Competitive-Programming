#include<bits/stdc++.h>
#define ll long long 
#define endl '\n'
using namespace std;

void solve() {
    ll n, c; cin >> n >> c;
    vector<ll> a(n);
    for(auto& i : a) cin >> i; //O(n)

    ll l = 1, r = 1e9, ans = -1;
    while(l <= r) { // O(log(1e9)*n)
        // ll mid = l + (r - l) / 2;
        ll mid = (l + r) / 2;
        ll sum_all = 0;
        for(auto i : a) {
            sum_all += (i + 2 * mid) * (i + 2 * mid);
            if(sum_all > c) break;
        }
        if(sum_all <= c) {
            ans = mid;
            l = mid + 1;
        } else {
            r = mid - 1;
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