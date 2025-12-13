#include<bits/stdc++.h>
#define ll long long 
#define endl '\n'
using namespace std;

// bool check(vector<ll> &a, ll x) {
//     ll n = a.size();
//     vector<ll> b;
//     for(ll i = 0; i < n; i++) {
//         if(a[i] != x) {
//             b.push_back(a[i]);
//         }
//     }
//     ll m = b.size();
//     for(ll i = 0; i < m; i++) {
//         if(b[i] != b[m-i-1]) {
//             return false;
//         }
//     }
//     return true;
// }

// void solve() {
//     ll n; cin >> n;
//     vector<ll> a(n);
//     for(auto& i : a) cin >> i;
    
//     for(ll i = 0; i < n; i++) {
//         if(a[i] != a[n-i-1]) {
//             if(check(a, a[i]) || check(a, a[n-i-1])) {
//                 cout << "YES" << endl;
//             } else {
//                 cout << "NO" << endl;
//             }
//             return;
//         }
//     }
//     cout << "YES" << endl;
// }

bool check2(const vector<ll>&a, ll l, ll r, ll x) {
    while(l < r) {
        if(a[l] == a[r]) {
            l++;
            r--;
        } else if(a[l] == x) {
            l++;
        } else if(a[r] == x) {
            r--;
        } else {
            return false;
        }
    }
    return true;
}

void solve() {
    ll n; cin >> n;
    vector<ll> a(n);
    for(auto& i : a) cin >> i;

    ll i = 0, j = n - 1;
    while(i < j) {
        if(a[i] == a[j]){
            i++;
            j--;
            continue;
        }
        if(check2(a, i + 1, j, a[i]) || check2(a, i, j - 1, a[j])) {
            cout << "YES" << endl;
            return;
        }
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
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