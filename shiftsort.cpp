#include<bits/stdc++.h>
#define ll long long 
#define endl '\n'
using namespace std;

void solve() {
    ll n; cin >> n;
    string s; cin >> s;
    ll k = s.size();
    ll count_0 = 0, count_1 = 0;
    for(ll i = 0; i < k; i++) {
        if(s[i] == '0') count_0++;
        else count_1++;
    }
    ll ans = 0;
    ll i = k -1;
    while(count_1 > 0) {
        if(s[i] == '0') {
            ans++;
        }
        count_1--;
        i--;
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