#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll n; cin >> n;
    vector<ll> a(n), b(n);

    for(ll i = 0; i < n; i++) cin >> a[i];
    for(ll i = 0; i < n; i++) cin >> b[i];
    
    vector<pair<ll,ll>> combinations;
    for(ll i = 0; i < n; i++) {
        combinations.push_back({a[i], b[i]});
    }

    sort(combinations.begin(), combinations.end());

    ll ans = 0, left = 0, right = 0, leftS = 0, rightS = 0;

    while(left < n ) {
        leftS += combinations[left].first;
        rightS += combinations[right].second;
        
        if(left < 2 && right < 2) {
            left++;
            right++;
        }
        if(leftS <= rightS && left >= 2 && right >= 2) {
            ans++;
            left++;
            right++;
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