#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll n, k; cin >> n >> k;
    vector<ll> a(n+1);
    for(ll i = 1; i <= n; i++) {
        cin >> a[i];
    }
    sort(a.begin()+1, a.end());

    ll mid_pos = (n + 1)/2;

    ll low = a[mid_pos], high = a[mid_pos] + k;
    ll ans = low;

    while(low <= high) {
        ll mid = (low + high) / 2;

        ll ops = 0;
        for(ll i = mid_pos; i <= n; i++) {
            if(a[i] < mid) {
                ops += mid - a[i];
            }
        }
        if(ops <= k) {
            ans = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t=1;
    // cin >> t;
    while(t--) {
       solve();
    }
    return 0;
}