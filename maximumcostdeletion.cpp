#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll n, a, b; cin >> n >> a >> b;
    string s; cin >> s;

    if(b >= 0) {
        cout << a*n + b*n << endl;
    } else {
        ll cnt = 1;
        for(ll i = 0; i < n-1; i++) {
            if(s[i] != s[i+1]) cnt++;
        }
        cout << a*n + ((cnt/2) + 1)*b << endl;
    }
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