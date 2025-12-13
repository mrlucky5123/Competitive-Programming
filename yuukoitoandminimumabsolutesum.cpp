#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

// void solve() {
//     ll n; cin >> n; 
//     vector<ll> a(n);
//     bool first_ele = false, last_ele = false;
//     for(ll i = 0; i < n; i++){
//         cin >> a[i];
//         if(i == 0 && a[i] == -1) first_ele = true;
//         if(i == n - 1 && a[i] == -1) last_ele = true;
//     } 

//     if(first_ele == true && last_ele == true) {
//         a[0] = 0;
//         a[n-1] = 0;
//     } else if(first_ele == true && last_ele == false) {
//         a[0] = a[n-1];
//     } else if(first_ele == false && last_ele == true) {
//         a[n-1] = a[0];
//     }

//     for(ll i = 0; i < n; i++) {
//         if(a[i] == -1) {
//             a[i] = 0;
//         }
//     }

//     cout << abs(a[n-1]-a[0]) << endl;
//     for(auto& i : a) cout << i << " ";
//     cout << endl;
// }

void solve() {
    ll n; cin >> n; 
    ll count_1_a = 0, count_1_b = 0;
    vector<ll> a(n+1, 0), b(n+1, 0);
    for(ll i = 1; i <= n; i++) {
        cin >> a[i];
        if(a[i] == 1) count_1_a++; 
    }
    for(ll i = 1; i <= n; i++) {
        cin >> b[i];
        if(b[i] == 1) count_1_b++; 
    }

    if(count_1_a % 2 == count_1_b % 2) {
        cout << "TIE" << endl;
        return;
    }

    // ll last_ind = -1;
    // for(ll i = 1; i <= n; i++) {
    //     if(a[i] != b[i]) {
    //         last_ind = i;
    //     }
    // }
    // if(last_ind % 2 == 1) {
    //     cout << "AJISAI" << endl;
    // } else {
    //     cout << "MAI"  << endl;
    // }
    for(ll i = n; i >= 1; i--) {
        if(a[i] != b[i]) {
            if(i % 2 == 1) {
                cout << "AJISAI"  << endl;
            } else {
                cout << "MAI" << endl;
            }
            return;
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