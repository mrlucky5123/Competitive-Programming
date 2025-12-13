#include<bits/stdc++.h>
#define ll long long
#define endll '\n'
using namespace std;

ll findMex(const vector<ll>& a) {
    ll n = a.size();    // 
    vector<bool> present(n + 1, false);
    for (ll x : a) {
        if (x >= 0 && x <= n) {
            present[x] = true;
        }
    }
    ll mex = 0;
    while (mex <= n && present[mex] == true) {
        mex++;
    }
    return mex;
}

void solve() {
    ll n, k; cin >> n >> k;
    vector<ll> a(n);
    set<ll> lesser;
    ll count_k_a = 0;
    for(ll i = 0; i < n; i++){
      cin >> a[i];
      if(a[i] == k) count_k_a++;
      else if(a[i] < k) lesser.insert(a[i]); 
    } 
    ll curr_mex = findMex(a);
    ll missing = k - lesser.size();
    if(curr_mex == k) {
      cout << 0 << endl;
    } else {
      cout << max(missing, count_k_a) << endl;
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