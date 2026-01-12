#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll n, t; cin >> n >> t;
    string s; cin >> s;
    
    for(ll i = 0; i < t; i++) {
        for(ll j = 0; j < n - 1; j++) {
            if(s[j] == 'B' && s[j+1] == 'G') {
                swap(s[j], s[j+1]);
                j++;
            }
        }
    }
    cout << s << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t = 1;
    // cin >> t;
    while(t--) {
       solve();
    }
    return 0;
}