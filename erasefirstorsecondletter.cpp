#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

void solve() {
    ll n;
    cin >> n;
    string s;
    cin >> s;
    map<char, ll> freq;
    ll count = 0; 
    vector<ll> distinct(n, 0);
    for(ll i = 0; i < n; i++) {
        freq[s[i]]++;
        if(freq[s[i]] == 1) count++;
        distinct[i] = count;
    }
    ll ans = 0; 
    for(auto it : distinct) {
        ans += it;
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