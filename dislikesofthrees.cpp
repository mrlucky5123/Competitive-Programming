#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl '\n'

vector<ll> arr;

ll precompute() {
    ll i = 1;
    while(arr.size() < 1000) {
        if(i % 3 != 0 && i % 10 != 3) {
            arr.push_back(i);
        }
        i++;
    }
    return 0;
}

ll number(ll n) {
    ll ans = arr[n-1];
    return ans;
}
void solve() {
    ll n; cin >> n;
    cout << number(n) << endl;
}

int main() {
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   long long t;
   cin >> t;
   precompute();
   while(t--) {
       solve();
   }
   return 0;
}