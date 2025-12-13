#include<bits/stdc++.h>
#define ll long long 
#define endl '\n'
using namespace std;

void solve() {
    string s; cin >> s;
    ll n = s.size();
    set<char> c;
    ll k;
    for(k = 0; k < n; k++) {
        if(c.find(s[k]) == c.end()) {
            c.insert(s[k]);
        } else break;
    }
    for(ll i = k; i < n; i++) {
        if(s[i] != s[i-k]) {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
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