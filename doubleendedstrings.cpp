#include<bits/stdc++.h>
#define ll long long 
#define endl '\n'
using namespace std;

void largest_common_substring(string a, string b) {
    ll n1 = a.size(), n2 = b.size();
    // ll x1 = 0, x2 = 0, count = 0;
    ll count_max_substring = 0;
    for(ll i = 0; i < n1; i++) {
        for(ll j = i; j < n1; j++) {
            string sub = a.substr(i, j - i + 1);
            if(b.find(sub) != string::npos) {
                count_max_substring = max(count_max_substring, (ll)sub.size());
            }
        }
    }
    cout << n1 + n2 - (2 * count_max_substring) << endl;
}

void solve() {
    string a, b;
    cin >> a >> b;
    largest_common_substring(a, b);
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