#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll n; cin >> n;
    vector<ll> a(n), pre(n+1,0);
    for(auto& x : a) cin >> x;
    for(ll i = 1; i <= n; i++) {
        pre[i] = a[i-1] + pre[i-1];
    }
    string s; cin >> s;

    ll left = 0, right = n - 1;
    ll ans = 0;

    while(left < right) {
        while(left < right && s[left] != 'L') {
            left++;
        }

        while(left < right && s[right] != 'R') {
            right--;
        } 
        if(left < right && s[left] == 'L' && s[right] == 'R'){
            ans += pre[right+1] - pre[left];
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