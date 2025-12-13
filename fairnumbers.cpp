#include<bits/stdc++.h>
#define ll long long 
#define endl '\n'
using namespace std;

bool isFair(ll n) {
    ll num = n;
    while(num > 0) {
        ll x = num % 10;
        if(x != 0 && n % x != 0) return false;
        num /= 10;
    }
    return true;
}

void solve() {
    ll n; cin >> n;
    while(!isFair(n)) n++;

    cout << n << endl;
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