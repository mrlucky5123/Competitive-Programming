#include<bits/stdc++.h>
#define ll long long 
#define endl '\n'
using namespace std;

void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    for(ll i = 0; i < n; i++) cin >> a[i];

    unordered_map<ll,ll> freq;
    for(ll num : a) {
        freq[num]++;
    }

    for(auto& pair : freq) {
        if(pair.second == 1) {
            cout << -1 << endl;
            return;
        }
    }

    vector<ll> ans(n,0);
    for(ll i = 0; i < n; i++) {
        ans[i] = i + 1;
    }
    ll left = 0, right =0;
    while(right < n) {
        if(a[left] == a[right]) {
            right++;
        } else {
            rotate(ans.begin() + left, ans.begin() + left + 1, ans.begin() + right);
            left = right;
        }
    }
    rotate(ans.begin() + left, ans.begin() + left + 1, ans.begin() + right);

    for(auto& num : ans ) {
        cout << num << " ";
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