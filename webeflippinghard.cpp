#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

// void solve() {
//     ll n; cin >> n; 
//     vector<ll> a(n+1);
//     bool allNegative = true;
//     bool allPositive = true;
//     for(ll i = 1; i <= n; i++) {
//         cin >> a[i];
//         if(a[i] > 0) allNegative = false;
//         if(a[i] < 0) allPositive = false;
//     }
//     if(allNegative) {
//         cout << 0 << endl;
//         cout << endl;
//         return;
//     }
//     if(allPositive) {
//         cout << 0 << endl;
//         cout << endl;
//         return;
//     }

//     vector<ll> flips_idx;
//     ll flips = 0;

//     for(ll i = 1; i <= n; i++) {
//         ll curr;
        
        
//         if(flips%2 == 0) curr = a[i];
//         else curr = -a[i];

//         if(curr < 0) continue;
//         if(curr > 0) {
//             flips_idx.push_back(i);
//             flips++;
//         }
//     }

//     // reverse(flips_idx.begin(), flips_idx.end());
//     cout << flips_idx.size() << endl;
//     for(ll i = 0; i < flips_idx.size(); i++) {
//         cout << flips_idx[i] << " ";
//     }
//     cout << endl;
// }

void solve() {
    ll n; cin >> n; 
    vector<ll> a(n);
    for(ll &x : a) cin >> x;

    //prefix sum 
    vector<ll> prefix(n+1, 0);
    for(ll i = 1; i <= n; i++) {
        prefix[i] = prefix[i-1] + abs(a[i-1]);
    }

    // suffix sum 
    vector<ll> suffix(n+1, 0);
    for(ll i = n-1; i >= 0; i--) {
        suffix[i] = suffix[i+1] + a[i];
    }

    ll best = suffix[0];
    ll best_idx = -1;

    for(ll i = 0; i < n; i++) {
        if(a[i] > 0) {
            ll score = prefix[i] + suffix[i+1] - a[i];
            if(score > best) {
                best = score;
                best_idx = i;
            }
        }
    }
    if(best_idx == -1) {
        cout << 0 << endl;
        cout << endl;
        return;
    }

    vector<ll> flips_idx;
    ll flips = 0;
    for(ll i = best_idx - 1; i >= 0; i--) {
        ll curr;
        if(flips%2 == 0) curr = a[i];
        else curr = -a[i];

        if(curr > 0) {
            flips_idx.push_back(i);
            flips++;
        }
    }

    flips_idx.push_back(best_idx);

    cout << flips_idx.size() << endl;
    for(ll i = 0; i < flips_idx.size(); i++) {
        cout << flips_idx[i]+1 << " ";
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