#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

void solve() {
    ll n; cin >> n;
    vector<ll> a(n);
    for(ll i = 0; i < n; i++) cin >> a[i];

    vector<ll> res;
    bool chotu = true;
    ll left = 0, right = n - 1;
    while(left < right) {
        if(chotu) {
            res.push_back(a[left]);
            left++;
            chotu = false;
        } else {
            res.push_back(a[right]);
            right--;
            chotu = true;
        }
    }
    for(auto& i : res) cout << i << " ";
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