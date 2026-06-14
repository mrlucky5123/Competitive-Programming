#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

// void solve() {
//     ll n; cin >> n; vector<ll> a(n);
//     for(auto &x : a) cin >> x;

//     vector<ll> b(a);
//     sort(b.begin(), b.end());
//     ll mn = *min_element(a.begin(), a.end());

//     for(ll i = 0; i < n; i++) {
//         if(a[i] != b[i]) {
//             if(a[i] % mn != 0) {
//                 cout << "NO" << endl;
//                 return;
//             }
//         }
//     }
//     cout << "YES" << endl;
// }

void solve() {
    ll n; cin >> n; 
    vector<ll> a(n);
    for(auto& x : a) cin >> x;
    ll mn = *min_element(a.begin(), a.end());
    multiset<ll> st;
    for(ll i = 0; i < n; i++) {
        if(a[i]%mn==0)st.insert(a[i]);
    }
    for(ll i = 0; i < n; i++) {
        if(a[i]%mn==0) {
            ll temp = *st.begin();
            a[i]=temp;
            st.erase(st.find(temp));
            // a[i]=*st.begin();
            // st.erase(st.begin());
        }
    }

    for(ll i = 1; i < n; i++) {
        if(a[i] < a[i-1]) {
            cout << "NO" << endl;
            return;
        }
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