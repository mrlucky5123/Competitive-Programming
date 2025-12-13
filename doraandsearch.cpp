#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

// void solve() {
//     ll n; cin >> n;
//     vector<ll> a(n);
//     for(ll i = 0; i < n; i++) cin >> a[i];

//     bool possible = is_sorted(a.begin(), a.end());
//     if(possible) {
//         cout << -1 << endl;
//         return;
//     }

//     ll left = 0, right = n - 1;
//     ll ans1 = -1, ans2 = -1;
//     while(left < right) {
//         ll maxi = *max_element(a.begin() + left, a.begin() + right + 1);
//         ll mini = *min_element(a.begin() + left, a.begin() + right + 1);
//         if(a[left] != maxi && a[left] != mini) {
//             ans1 = left + 1;
//         } else {
//             ans1 = -1;
//             left++;
//             continue;
//         }
//         if(a[right] != maxi && a[right] != mini) {
//             ans2 = right + 1;
//         } else {
//             ans2 = -1;
//             right--;
//             continue;
//         }
//         if(ans1 != -1 && ans2 != -1) {
//             break;
//         }
//     }
//     if(ans1 == -1 || ans2 == -1) {
//         cout << -1 << endl;
//         return;
//     }

//     cout << ans1 << " " << ans2 << endl;
// }

void solve() {
    ll n; cin >> n;
    vector<ll> a(n);
    for(auto& i : a) cin >> i;

    bool possible = is_sorted(a.begin(), a.end());
    if(possible) {
        cout << -1 << endl;
        return;
    }
    multiset<ll> s(a.begin(), a.end());

    ll left = 0, right = n -1 ;
    while(left <= right) {
        ll mn = *s.begin();
        ll mx = *s.rbegin();

        if(a[left] == mn || a[left] == mx) {
            s.erase(s.find(a[left]));
            left++;
        } else if(a[right] == mn || a[right] == mx) {
            s.erase(s.find(a[right]));
            right--;
        } else break;
    }
    if(left < right) {
        cout << left + 1 << " " << right + 1 << endl;
    } else {
        cout << -1 << endl;
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