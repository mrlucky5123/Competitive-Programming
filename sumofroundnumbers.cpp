#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

// void solve() {
//     ll n; cin >> n;
//     vector<ll> res;
//     ll place_value = 1;
//     while(n > 0) {
//         ll last = n % 10;
//         if(last != 0) res.push_back(last*place_value);
//         n /= 10;
//         place_value *= 10; 
//     }
//     cout << res.size() << endl;
//     for(auto i : res) {
//         cout << i << " ";
//     }
//     cout << endl;
// }

void solve() {
    string s; cin >> s;
    ll n = s.size();

    cout << count_if(s.begin(), s.end(),
                    [](char c) {return c != '0';}) << endl;
    
    for(ll i = 0; i < n; i++) {
        if(s[i] != '0') {
            ll round = (s[i]-'0');
            ll zeros = n - i - 1;
            while(zeros--) round *= 10;
            cout << round << " ";
        }
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