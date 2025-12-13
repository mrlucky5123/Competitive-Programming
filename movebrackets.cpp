#include<bits/stdc++.h>
#define ll long long 
#define endl '\n'
using namespace std;

void solve() {
    ll n; cin >> n;
    string s;
    cin >> s;
    ll ans = 0, sum = 0;
    for(ll i = 0; i < n; i++) {
        if(s[i] == '(') sum++;
        else sum--;
        if(sum < 0) {
            ans++;
            sum = 0;
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