#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    string s; cin >> s;
    ll n = s.length();

    ll total_0s = 0;
    for(char c : s) {
        if(c == '0') total_0s++;
    }
    ll total_1s = n - total_0s;

    vector<ll> pre0s(n, 0);
    pre0s[0] = (s[0] == '0') ? 1 : 0;
    for(ll i = 1; i < n; i++) {
        pre0s[i] = pre0s[i-1] + ((s[i] == '0') ? 1 : 0);
    }
    ll ans = LLONG_MAX;

    for(ll i = 0; i < n; i++) {
        ll zero_in_pre = (i > 0) ? pre0s[i-1] : 0;
        ll one_in_pre = i - zero_in_pre;

        ll zero_in_suff = total_0s - zero_in_pre;
        ll costA = one_in_pre + zero_in_suff;

        ll one_in_suff = total_1s - one_in_pre;
        ll costB = zero_in_pre + one_in_suff;

        ans = min(ans, min(costA, costB));
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