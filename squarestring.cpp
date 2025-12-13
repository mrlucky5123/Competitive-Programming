#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    string s; cin >> s;
    ll n = s.length();
    if(n % 2 != 0) {
        cout << "NO" << endl;
        return;
    }
    ll left = 0, right = n / 2;
    while(left < n / 2) {
        if(s[left] != s[right]) {
            cout << "NO" << endl; 
            return;
        } else {
            continue;
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