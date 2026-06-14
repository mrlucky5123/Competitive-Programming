#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

// void solve() {
//     ll n; cin >> n; 
    
//     vector<ll> gang(n+1);
//     bool allsame = true;
//     for(ll i = 1; i <= n; i++) cin >> gang[i];
//     for(ll i = 2; i <= n; i++) {
//         if(gang[i] == gang[1]) {
//             allsame = false;
//             break;
//         }
//     }
//     if(allsame) {
//         cout << "NO" << endl;
//         return;
//     }

//     vector<array<ll, 2>> edges;
    
//     ll val1 = 1, val2 = -1;
//     for(ll i = 2; i <= n; i++) {
//         if(gang[i] != gang[1]) {
//             edges.push_back({1, i});
//             val2 = i;
//         } else {
//             edges.push_back({val2, i});
//         }
//     }
//     cout << "YES" << endl;
//     for(auto& i : edges) {
//         cout << i[0] << " " << i[1] << endl;
//     }
// }

void solve() {
    ll n; cin >> n; 
    
    vector<ll> gang(n+1);
    for(ll i = 1; i <= n; i++) cin >> gang[i];

    vector<array<ll, 2>> edges;
    
    ll val1 = 1, val2 = -1;
    for(ll i = 2; i <= n; i++) {
        if(gang[i] != gang[1]) {
            edges.push_back({1, i});
            val2 = i;
            break;
        }
    }
    if(val2 == -1) {
        cout << "NO" << endl;
        return;
    }
    
    for(ll i = 2; i <= n; i++) {
        if(i == val2) continue;
        if(gang[i] != gang[1]) {
            edges.push_back({1, i});
        } else {
            edges.push_back({val2, i});
        }
    }

    cout << "YES" << endl;
    for(auto& i : edges) {
        cout << i[0] << " " << i[1] << endl;
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