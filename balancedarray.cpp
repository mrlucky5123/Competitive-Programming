#include<bits/stdc++.h>
#define ll long long 
#define endl '\n'
using namespace std;

void solve() {
    ll n; cin >> n;

    ll a = n / 2;
    ll b = n - a;

    if(b % 2 != 0){
        cout << "NO" << endl;
        return;
    }

    vector<ll> res(n);
    cout << "YES" << endl;
    ll sum = 0;
    for(ll i = 0; i < a; i++) {
        res[i] = 2 * (i + 1);
        sum += res[i];
    }
    res[a] = 1;
    sum -= 1;
    for(ll i = 1; i < b - 1; i++) {
        res[a + i]  = 2 * i + 1;
        sum -= res[a + i]; 
    }
    res[n-1] = sum;
    for(auto i : res) {
        cout << i << " ";
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