#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll n; cin >> n; 
    vector<ll> a(n);
    for(auto& i : a) cin >> i;
    sort(a.begin(), a.end());

    ll diff1 = a[n-1]-a[1];
    ll diff2 = a[n-2]-a[0];

    // if(diff1 > diff2) {
    //     cout << diff2 << endl;
    // } else {
    //     cout << diff1 << endl;
    // }
    cout << min(diff1, diff2) << endl;
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