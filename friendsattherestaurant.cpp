#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll n; cin >> n;
    vector<ll> a(n), b(n);
    for(ll i = 0; i < n; i++) cin >> a[i];
    for(ll i = 0; i < n; i++) cin >> b[i];

    vector<ll> diff(n);
    for(ll i = 0; i < n; i++) {
        diff[i] = b[i] - a[i];
    }

    sort(diff.begin(), diff.end());

    ll left = 0, right = n - 1;
    ll ans = 0; 
    while(left < right) {
        if(diff[left] + diff[right] < 0) {
            left++;
        }
        if(diff[left] + diff[right] >= 0) {
            ans++;
            left++;
            right--;
        }
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