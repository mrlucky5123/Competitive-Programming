#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    string s; cin >> s;
    ll n = s.size();

    ll c1 = 0, c2 = 0, c3 = 0;
    for(ll i = 0; i < n; i++) {
        if(s[i] == '<') c1++;
        else if(s[i] == '*') c2++;
        else c3++;
    }
    string chk = string(c1, '<') + string(c2, '*') + string(c3, '>');
    if(c2 > 1 || chk != s) cout << -1 << endl;
    else cout << max(c1+c2, c2+c3) << endl;
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