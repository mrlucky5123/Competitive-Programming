#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    string s; cin >> s;
    ll n = s.size();

    ll pos1 = -1, pos2 = -1, pos3 = -1;
    ll min_len = LLONG_MAX;
    for(ll i = 0; i < n; i++) {
        if(s[i] == '1') pos1 = i;
        else if(s[i] == '2') pos2 = i;
        else if(s[i] == '3') pos3 = i;

        if(pos1 != -1 && pos2 != -1 && pos3 != -1) {
            ll len = max({pos1, pos2, pos3}) - min({pos1, pos2, pos3});
            min_len = min(min_len, len+1);
        }
    }
    if(min_len == LLONG_MAX) cout << 0 << endl;
    else cout << min_len << endl;
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