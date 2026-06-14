#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll n; cin >> n; vector<ll> a(n); for(ll i = 0; i < n; i++) cin >> a[i];

    sort(a.begin(), a.end());

    ll left = 0, right = n-1;
    ll count = 0;
    vector<ll> ans;
    while(left <= right) {
        if(count&1) {
            ans.push_back(a[left]);
            left++;
        } else {
            ans.push_back(a[right]);
            right--;
        }
        if(left == right) {
            ans.push_back(a[left]);
            break;
        }
        count++;
    }
    reverse(ans.begin(), ans.end());
    for(auto x : ans) {
        cout << x << " ";
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