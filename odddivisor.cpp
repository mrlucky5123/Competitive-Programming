#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl '\n'

void solve() {
    ll n;
    cin >> n;
    while(n % 2 == 0) {
        n /= 2;
    }
    // if(n == 1) {
    //     cout << "NO" << endl;
    // } else {
    //     cout << "YES" << endl;
    // }
    if(n > 1) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
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