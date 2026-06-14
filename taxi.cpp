#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll n; cin >> n;
    ll cnt1 = 0, cnt2 = 0, cnt3 = 0, cnt4 = 0;
    vector<ll> a(n);
    for(auto& i : a) {
        cin >> i;
        if(i == 1)cnt1++;
        else if(i == 2) cnt2++;
        else if(i == 3) cnt3++;
        else cnt4++;
    }
    ll ans = 0;

    // case 1 : 4s
    ans += cnt4;

    //case 2 : 3s + 1s
    ans += cnt3;
    ll ones_used = min(cnt3, cnt1);
    cnt1 -= ones_used;

    // case 3 : 2s + 2s or 2s + 1s + 1s
    ans += cnt2/2;
    if(cnt2&1) {
        ans++;
        cnt1 = max(0LL, cnt1 - 2);
    }

    // case 4 : 4s
    ans += (cnt1 + 3) / 4;
    
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