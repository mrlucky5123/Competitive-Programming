#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl '\n'

void solve() {
    ll n;
    cin >> n;
    n--;
    // ll val = n - 1;
    ll msb = log2(n);
    vector<ll> arr;
    ll num = pow(2, msb) - 1;
    while(num >= 0) {
        arr.push_back(num);
        num--;
    }
    num = pow(2, msb);
    for(ll i = num; i <= n; i++) {
        arr.push_back(i);
    }
    
    for(ll i = 0; i <= n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// void solve()
//  {
//     ll n;
//     cin >> n;
//     n--;
//     ll msb = log2(n);
//     vector<ll> arr;
//     ll num = pow(2, msb) - 1;
//     while (num >= 0) {
//         arr.push_back(num);
//         num--;
//     }
//     num = pow(2, msb);
//     while(num <= n) {
//         arr.push_back(num);
//         num++;
//     }
//     for(ll i = 0; i <= n; i++) {
//         cout << arr[i] << " ";
//     }  
//     cout << endl;  
// }
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