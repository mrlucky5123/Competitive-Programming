#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

bool helper(ll idx, ll sum, ll n, vector<ll>& arr, ll& target_sum) {
    if(sum==target_sum) return true;

    if(idx>=n) return false; // no more options to explore

    if(sum > target_sum) return false; // pruning the search space 
    bool ans = helper(idx+1, sum+arr[idx], n, arr, target_sum);
    if(ans) return true;
    ans = helper(idx+1, sum, n, arr, target_sum);
    return ans;
}

void solve() {
    ll n; cin >> n;
    vector<ll> a(n);
    for(auto& i : a) cin >> i;
    ll target_sum; cin >> target_sum;
    bool ans = helper(0,0,n,a,target_sum);
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