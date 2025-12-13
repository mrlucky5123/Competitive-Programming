#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

void solve() {
    ll n, k; cin >> n >> k;
    ll arr[n][n];
    for(ll i = 0; i < n; i++) {
        for(ll j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }
    ll cnt = 0;
    for(ll i = 0; i < n; i++) {
        for(ll j = 0; j < n; j++) {
            if(arr[i][j] != arr[n-i-1][n-j-1]) {
                cnt++;
            }
        }
    }
    cnt /= 2;
    if(cnt > k) {
        cout << "NO" << endl;
        return;
    } else {
        ll temp = k - cnt;
        if(temp % 2 == 0) {
            cout << "YES" << endl;
            return;
        } else {
            if(n % 2 == 0) cout << "NO" << endl;
            else cout << "YES" << endl;
            return;
        }
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