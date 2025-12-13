#include<bits/stdc++.h>
#define ll long long 
#define endl '\n'
using namespace std;

void solve() {
    ll n;
    char c;
    cin >> n >> c;

    string s;
    cin >> s;
    
    string useful_s = s + s;
    ll n = useful_s.size();
    // cout << useful_s << endl;

    ll idx = -1;
    ll ans = INT_MIN;
    for(ll i = n-1; i >= 0; i--) {
        if(useful_s[i] == 'g') {
            idx = i;
        }
        if(s[i] == c) {
            ans = max(ans, idx - i);
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