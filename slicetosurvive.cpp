#include<bits/stdc++.h>
#define ll long long 
using namespace std;

ll ans(ll n) {
    ll count = 0;
    while(n > 1) {
        n = (n+1) / 2;
        count++;
    }
    return count;
}

void solve() {
    ll n, m, a, b;
    cin >> n >> m >> a >> b;

    if((n+1-a) < a) a = n+1-a;
    if((m+1-b) < b) b = m+1-b;

    cout << min(1 + ans(n) + ans(b), 1 + ans(a) + ans(m)) << "\n";
    
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