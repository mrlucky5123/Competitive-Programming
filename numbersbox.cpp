#include<bits/stdc++.h>
#define ll long long 
#define endl '\n'
using namespace std;

void solve() {
    ll n, m; cin >> n >> m;
    vector<vector<ll>> a(n, vector<ll>(m));
    ll sum = 0, neg_count = 0;
    ll least_value = LLONG_MAX;
    for(ll i = 0; i < n; i++) {
        for(ll j = 0; j < m; j++) {
            cin >> a[i][j];
            if(a[i][j] < 0) neg_count++;
            sum += abs(a[i][j]);
            if(abs(a[i][j]) < least_value) {
                least_value = abs(a[i][j]);
            }        
        }
    }
    if(neg_count % 2 == 0) cout << sum << endl;
    else if(neg_count % 2 == 1) cout << sum - 2 * least_value << endl;

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