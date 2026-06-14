#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll n; cin >> n; 
    vector<ll> a(n+1);
    for(ll i = 1; i <= n; i++) {
        cin >> a[i];
    }

    vector<ll> pre(n+1, 0);
    for(ll i = 1; i <= n; i++) {
        pre[i] = a[i] + pre[i-1];
    }

    ll total = pre[n];
    // cout << total << endl;
    if(total % 3 != 0) {
        cout << 0 << endl;
        return;
    }

    ll point1 = total / 3, point2 =  2*(total/3);

    ll counter = 0, ans = 0;
    for(ll i = 1; i <= n-1; i++) {
        if(pre[i] == point2) ans+=counter;
        if(pre[i] == point1)counter++;
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