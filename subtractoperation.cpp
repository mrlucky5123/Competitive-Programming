#include<bits/stdc++.h>
#define ll long long 
#define endl '\n'
using namespace std;

// void solve() {
//     ll n, k; cin >> n >> k;
//     vector<ll> a(n);
//     for(auto& i : a) cin >> i;

//     map<ll, bool> m;
//     for(auto it : a){
//         m[it] = true;
//     }

//     for(ll i = 0; i < n; i++) {
//         ll c = a[i] - k; 
//         if(m.find(c) != m.end()) {
//             cout << "YES" << endl;
//             return;
//         }
//     }
//     cout << "NO" << endl;
// }
void solve() {
    ll n, k; cin >> n >> k;
    vector<ll> a(n);
    for(auto& i : a) cin >> i;
    set<ll> s(a.begin(), a.end());
    for(auto& i : a) {
        if(s.find(i-k) != s.end()) {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
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