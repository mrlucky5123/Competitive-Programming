#include<bits/stdc++.h>
#define ll long long 
#define end '\n'
using namespace std;

void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    for(ll i = 0; i < n; i++) cin >> a[i];

    bool possible = false;
    ll index1 = 0, index2 = 0, index3 = 0;
    // ll x = 1;
    // while(x <= n) {
    //     for(ll i = 1; i < n + 1; i++) {
    //         if(a[i] == x) {
    //             index1 = i;
    //             break;
    //         }
    //     }
    //     for(ll i = index1 + 1; i < n+1; i++) {
    //         if(a[i] > x) {
    //             index2 = i;
    //             break;
    //         }
    //     }
    //     for(ll i = index2 + 1; i < n+1; i++) {
    //         if(a[i] < a[index2]) {
    //             index3 = i;
    //             possible = true;
    //             break;
    //         }
    //     }
    //     x++;
    // }
    for(ll j = 1; j < n - 1; j++) {
        if(a[j-1] < a[j] && a[j+1] < a[j]) {
            possible = true;
            index1 = j - 1;
            index2 = j;
            index3 = j + 1;
        }
    }
    if(possible) {
        cout << "YES" << endl;
        cout << index1 + 1 << " " << index2 + 1 << " " << index3 + 1<< endl;
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