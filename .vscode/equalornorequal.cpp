#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl '\n'

void solve() {
    string s;
    cin >> s;
    ll n = s.length();
    // First attempt // s.size() also works
    // cout << n << endl;
    // if(s[0] == 'E' && s[n-1] == 'N' || s[0] == 'N' && s[n-1] == 'E') {
    //     cout << "NO" << endl;
    // } else {
    //     cout << "YES" << endl;
    // }

    //Second Attempt
    // ll countN = 0;
    // for(ll i = 0; i < n; i++) {
    //     if(s[i] == 'N') countN++;
    // }
    // if(countN > 1 || countN == 0) {
    //     cout << "YES" << endl;
    // } else {
    //   cout << "NO" << endl;
    
    // This is better than above one.
    // if(count == 1) {
    //     cout << "NO" << end;
    // } else {
    //     cout << "YES" << endl;
    // }

    //Third Attempt
    cout << (count(s.begin(), s.end(), 'N') == 1 ? "NO\n" : "YES\n" ); 
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