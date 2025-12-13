#include<bits/stdc++.h>
#define ll long long 
#define endl '\n'
using namespace std;

void solve() {
    ll n, k;
    cin >> n >> k;
    if(k > 30) {
        cout << n + 1 << endl;
    } else {
        ll max_sum = (1LL << k) - 1;
        if(max_sum <= n) {
            cout << (1LL << k) << endl;
        } else {
            cout << n + 1 << endl;
        }
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