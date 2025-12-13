#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl '\n'

void solve() {
    ll n, k, b,s;
    cin >> n >> k >> b >> s;
    ll min_sum = b*k;
    ll max_sum = k*b + n*(k-1);

    if(s < min_sum || s> max_sum){
        cout << -1 << endl;
        return;
    } else {
        vector<ll> arr(n,0);
        arr[0] = min_sum;
        s -= min_sum;
        for(ll i = 0; i < n; i++) {
            ll add = min(s, k-1);
            arr[i] += add;
            s -= add;
            if(s == 0) break;
        }
        for(auto x : arr) {
        cout << x << " ";
        }
        cout << endl;
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