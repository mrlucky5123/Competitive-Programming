#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

// void solve() {
//     ll n; cin >> n;
//     vector<ll> a(n);
//     for(auto& i : a) cin >> i;

//     //curr_mex calculation
//     ll curr_mex = 0;
//     for(ll i = 0; i < n; i++) {
//         if(a[i] == curr_mex) curr_mex++;
//     }
//     if(curr_mex == 0) {
//         cout << "YES" << endl;
//         return;
//     }

//     // target mex_cal and it's count 
//     ll target = curr_mex + 1, target_count = 0;
//     for(ll i = 0; i < n; i++) {
//         if(a[i] == target) target_count++;
//     }

//     ll first_idx = -1, last_idx = -1;
//     for(ll i = 0; i < n; i++) {
//         if(a[i] == target) first_idx = i;
//     }
//     for(ll i = n-1; i >= 0; i--) {
//         if(a[i] == target) last_idx = i;
//     }

//     //if target is not present check if 
//     if((target_count == 0 && a.size() > target) || target_count == 1 || (abs(first_idx-last_idx) == 0)) {
//         cout << "YES" << endl;
//         return;
//     }
//     for(ll i = first_idx + 1; i < last_idx; i++) {
//         if(a[i] < target) {
//             cout << "NO" << endl;
//             return;
//         }
//     }
//     cout << "NO" << endl;
// }

// void solve() {
//     ll n; cin >> n;
//     vector<ll> a(n);
//     for(ll i = 0; i < n; i++) cin >> a[i];

//     // frequency map
//     map<ll,ll> mp;
//     for(auto it : a) {
//         mp[it]++;
//     }

//     // finding current mex
//     ll mex = 0;
//     for(auto it : mp) {
//         if(it.first == mex) mex++;
//         else break;
//     }

//     // target mex
//     ll targetMax = mex + 1;

//     ll l = -1, r = -1;
//     for(ll i = 0; i < n; i++) {
//         if(a[i] == targetMax) {
//             if(l == -1) {
//                 l = i;
//             }
//             r = i;
//         }
//     }
    
//     if(l == -1) {
//         // freq of m + 1 = 0
//         ll flag = 0;

//         // for(ll i = 0; i < mex; i++) {
//         //     if(mp[i] > 1)  {
//         //         cout << "YES" << endl;
//         //         return;
//         //     }
//         // }
//         // for(ll i = mex + 1; i < mp.size(); i++) {
//         //     if(mp[i] >= 1) {
//         //         cout << "YES" << endl;
//         //         return;
//         //     }
//         // }
//         for(auto it : mp) {
//             if(it.first < mex && it.second > 1) flag = 1;
//             if(it.first > mex + 1) flag = 1;
//         }
//         if(flag) cout << "YES" << endl;
//         else cout << "NO" << endl;
//     } else {
//         for(ll i = l; i <= r; i++) {
//             a[i] = mex;
//         }
        
//         map<ll,ll> mp;
//         for(auto it : a) {
//             mp[it]++;
//         }
//         ll nmex = 0;
//         for(auto it : mp) {
//             if(it.first == nmex)nmex++;
//             else break;
//         }
//         if(nmex == targetMax) {
//             cout << "YES" << endl;
//         }else {
//             cout << "NO" << endl;
//         }
//     }
// }

ll findMex(vector<ll>& a, ll x = 0) {
    set<ll> s;
    for(auto& i : a) s.insert(i);
    while(s.count(x)) x++;
    return x;
}

void solve() {
    ll n; cin >> n;
    vector<ll> a(n);
    for(auto& i : a) cin >> i;

    ll mex = findMex(a), left = LLONG_MAX, right = LLONG_MIN;
    
    for(ll i = 0; i < n; i++) {
        if(a[i] == mex + 1) left = min(left, i), right = max(right, i);
    }

    if(left != LLONG_MAX) {
        for(ll i = left; i <= right; i++) a[i] = mex;
        cout << (findMex(a) == mex + 1 ? "YES" : "NO") << endl;
    } else {
        cout << (a.size() != mex ? "YES" : "NO") << endl;
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