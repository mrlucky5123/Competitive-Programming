#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll n, k; cin >> n >> k;

    string ans(n, 'a');
    ll pos1 = -1, pos2 = -1;
    for(ll i = n - 2; i >= 0; i--) {
        ll count = n - i - 1;
        if(k <= count) {
            pos1 = i;
            pos2 = n - k;
            break;
        } else {
            k = k - count;
        }
    }

    ans[pos1] = 'b';
    ans[pos2] = 'b';

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