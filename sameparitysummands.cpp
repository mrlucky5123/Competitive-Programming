#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

// void solve() {
//     ll n, k; cin >> n >> k;
//     if(k > n) {
//       cout << "NO" << endl;
//       return;
//     }
//     if(n==k){
//         cout << "YES" << endl;
//         for(ll i = 0; i < n; i++) {
//             cout << "1 ";
//         }
//         cout << endl;
//         return;
//     }
//     if(n&1) {
//         // odd and even summands 
//         if(k%2 == 0) {
//             cout << "NO";
//         } else {
//             //odd and odd 
//             cout << "YES" << endl;
//             cout << n - (k-1) << " ";
//             for(ll i = 0; i < k-1; i++) {
//                 cout << "1" << " ";
//             }
//         }
//         cout << endl;
//         return; 
//     } else {
//         if(n % k == 0) {
//             ll num = n / k;
//             cout << "YES" << endl;
//             for(ll i = 0; i < k; i++) {
//                 cout << num << " ";
//             }
//         } else if(k > n / 2) {
//               cout << "NO" << endl;
//               return;
//         } else {
//             ll num2 = n - 2*(k-1);
//             cout << "YES" << endl;
//             cout << num2 << " ";
//             for(ll i = 0; i < k-1; i++) {
//                 cout << "2" << " ";
//             }
//         }
//         cout << endl;
//         return;
//     }
//     cout << "NO" << endl;
// }

void solve() {
    ll n, k; cin >> n >> k;
    if(k > n) {
        cout << "NO" << endl;
        return;
    }

    if(n-k+1 > 0 && (n-k+1)&1) {
        cout << "YES" << endl;
        cout << n-k+1 << " ";
        for(ll i = 0; i < k-1; i++) {
            cout << "1 ";
        }
        cout << endl;
        return;
    }
    if(n-2*(k-1) > 0 && (n-2*(k-1))%2 == 0) {
        cout << "YES" << endl;
        cout << n-2*(k-1) << " ";
        for(ll i = 0; i < k-1; i++) {
            cout << "2 ";
        }
        cout << endl;
        return;
    }
    cout << "NO" << endl;
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