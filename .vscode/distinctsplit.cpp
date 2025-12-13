#include<bits/stdc++.h>
#define ll long long 
#define endl '\n'
using namespace std;

// void solve() {
//     ll n;
//     cin >> n;
//     string s;
//     cin >> s;
    
//     unordered_set<char> st;
//     vector<ll> prefix_unique_count(n+1, 0);
//     vector<ll> suffix_unique_count(n+1, 0);

//     for(ll i = 1; i <= n; i++){
//         st.insert(s[i-1]);
//         prefix_unique_count[i] = st.size();
//     }
//     st.clear();
//     for(ll i = n; i >= 1; i--){
//         st.insert(s[i-1]);
//         suffix_unique_count[i] = st.size();
//     }

//     ll ans = 0; 
//     for(ll i = 0; i < n; i++) {
//         ans = max(ans, prefix_unique_count[i] + suffix_unique_count[i+1]);
//     }
//     cout << ans << endl;
// }


void solve() {
    ll n;
    cin >> n;
    string s;
    cin >> s;

    vector<ll> freq_a(26,0), freq_b(26,0);
    for(char c : s){
        freq_b[c - 'a']++;
    }

    ll distinct_b = 0;
    for(ll x : freq_b) {
        if(x > 0) distinct_b++;
    }

    ll max_sum = 0;
    ll distinct_a = 0;

    for(ll i = 0; i < n; i++) {
        ll idx = s[i] - 'a';

        freq_a[idx]++;
        freq_b[idx]--;

        if(freq_a[idx] == 1) distinct_a++;
        if(freq_b[idx] == 0) distinct_b--;

        if(i < n - 1) {
            max_sum = max(max_sum, distinct_a + distinct_b);
        }
    }
    cout << max_sum << endl;
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

