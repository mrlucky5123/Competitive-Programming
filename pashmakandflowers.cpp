#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll n; cin >> n; 
    vector<ll> a(n);
    for(auto& i : a) cin >> i;

    ll mini = *min_element(a.begin(), a.end());
    ll maxi = *max_element(a.begin(), a.end());

    ll diff = maxi - mini;

    if(diff == 0) {
        cout << 0 << " " << n*(n-1)/2 << endl;
        return;
    }

    ll cnt_min = 0, cnt_max = 0;
    for(auto& x : a) {
        if(x == maxi) {
            cnt_max++;
        } else if(x == mini) {
            cnt_min++;
        }
    }
    cout << diff << " " << cnt_min * cnt_max << endl;
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