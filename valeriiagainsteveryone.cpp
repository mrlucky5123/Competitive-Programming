#include<bits/stdc++.h>
#define ll long long 
#define endl '\n'
using namespace std;

void solve() {
    // ll n; cin >> n;
    // vector<ll> b(n), a(n);
    // for(ll i = 0; i < n; i++) {
    //     cin >> b[i];
    //     a[i] = pow(2, b[i]);
    // }
    // vector<ll> prefix_sum(n);
    // prefix_sum[0] = a[0];
    // // cout << prefix_sum[0] << " ";
    // for(ll i = 1; i < n; i++) {
    //     prefix_sum[i] = prefix_sum[i-1] + a[i];
    //     // cout << prefix_sum[i] << " ";
    // }
    // // cout << endl;
    // ll easy = false;
    // for(ll i = 0; i < n; i++) {
    //     if(prefix_sum[i] == (prefix_sum[n] - prefix_sum[i])) {
    //       easy = true;
    //     }
    // }
    // if(easy == true) cout << "YES" << endl;
    // else cout << "NO" << endl;

    ll n; cin >> n;
    vector<ll> b(n);
    for(ll i = 0; i < n; i++) cin >> b[i];

    // unordered_map<ll, ll> freq;
    // for(ll i = 0; i < n; i++) {
    //     freq[b[i]]++;
    // }

    // bool possible = false;
    // for(auto& it : freq) {
    //     if(it.second > 1) {
    //         possible = true;
    //         break;
    //     }
    // }
    unordered_set<ll> s;
    for(auto& it : b)  {
        s.insert(it);
    }
    bool possible = false;
    if(s.size() < n) possible = true;
    if(possible) cout << "YES" << endl;
    else cout << "NO" << endl;

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