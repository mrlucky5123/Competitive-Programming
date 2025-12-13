#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

void solve() {
    ll n; cin >> n;
    vector<ll> a(n);
    for(ll i = 0; i < n; i++) {
        cin >> a[i];
    }
    vector<ll> pre(n), suf(n);
    pre[0] = a[0];
    suf[0] = a[n-1];
    for(ll i = 0; i < n; i++) {
        pre[i] = pre[i-1] + a[i];
    }
    for(ll i = n - 2; i >= 0; i--) {
        suf[i] = suf[i+1] + a[i];
    }

    ll left = 0, right = n - 1, good_idx1 = -1, good_idx2 = -1;
    while(left < right) {
        if(pre[left] == suf[right]) {
            good_idx1 = left;
            good_idx2 = right;
            left++;
            right--;
        }else if(pre[left] < suf[right]) {
            left++;
        } else {
            right--;
        }
    }
    if(good_idx1 != -1 && good_idx2 != -1) {
        cout << good_idx1 + 1 + n - good_idx2 << endl;
        return;
    } else{
        cout << 0 << endl;
        return;
    } 
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