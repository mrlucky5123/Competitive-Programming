#include<bits/stdc++.h>
#define ll long long 
#define endl '\n'
using namespace std;

void solve() {
    ll n; cin >> n;
    string s; cin >> s;
    vector<ll> freq(26,0);
    for(auto c : s) {
        freq[c - 'a']++;
    }
    ll maxfreq = *max_element(freq.begin(), freq.end());
    cout << max(n % 2, maxfreq *2 - n) << endl;

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