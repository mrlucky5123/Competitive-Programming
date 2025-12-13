#include<bits/stdc++.h>
#define ll long long 
#define endl '\n'
using namespace std;

void solve() {
    ll n; cin >> n;
    // Input and sorting
    ll a;
    vector<pair<ll, ll>> points_with_index; // {points, original_index}
    for(ll i = 0; i < n; i++) {
        cin >> a;
        points_with_index.push_back({a, i});
    }
    sort(points_with_index.begin(), points_with_index.end());

    //prefix sum array
    vector<ll> pre(n); 
    pre[0] = points_with_index[0].first;
    for(ll i = 1; i < n; i++) {
        pre[i] = pre[i-1] + points_with_index[i].first;
    }

    //answer array and logic
    vector<ll> ans(n);
    for(ll i = 0; i < n; i++) {
        ll j = i;
        ll found = i;
        while(j < n) {
            pair<ll, ll> temp = {pre[j]+1, INT_MIN};
            ll idx = lower_bound(points_with_index.begin(), points_with_index.end(), temp) - points_with_index.begin();
            idx--;
            if(idx == j) {
                break;
            }
            found += idx - j; 
            j = idx;
        }
        ans[points_with_index[i].second] = found;
    }
    for(auto it : ans) {
        cout << it << " ";
    }
    cout << endl;

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