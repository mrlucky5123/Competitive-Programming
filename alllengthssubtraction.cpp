#include<bits/stdc++.h>
#define ll long long 
#define endl '\n'
using namespace std;

void solve() {
    ll n; cin >> n;
    vector<ll> a(n);
    for(ll i = 0; i < n; i++){
        cin >> a[i];
    } 
    bool check = true;
    ll left = 0, right = n - 1;
    ll curr = 1;
    while(curr <= n) {
        if(a[left] == curr) {
            curr++;
            left++;
            continue;
        }else if(a[right] == curr) {
            curr++;
            right--;
            continue;
        } else {
            check = false;
            break;
        }
    }
    if(check) cout << "YES" << endl;
    else cout << "NO" << endl;



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