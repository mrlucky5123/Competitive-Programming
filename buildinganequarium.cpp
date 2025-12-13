#include<bits/stdc++.h>
#define ll long long 
#define endl '\n'
using namespace std;

bool check(ll mid, vector<ll>&a, ll x) {
    ll sum = 0;
    ll n = a.size();
    for(ll i = 0; i < n; i++) { // O(n)
        if(a[i] < mid) sum += (mid - a[i]);
    }
    return sum <= x;
}

void solve() {
    ll n, x; cin >> n >> x;
    vector<ll> a(n);
    for(auto& i : a)cin >> i;

    ll si = 1, ei = 1e12, ans = -1;
    while(si<=ei) { // log(1e12)*O(n)
        // ll mid = si + (ei - si) / 2;
        ll mid = (si + ei) / 2;
        if(check(mid, a, x)) { // O(n)
            ans = mid;
            si = mid + 1;
        } else {
            ei = mid - 1;
        }
    }
    cout << ans << endl;
}

// t.c :- O(n*log(1e12));
// s.c :- O(n);
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