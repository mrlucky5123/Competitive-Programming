#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll n; cin >> n;
    string s; cin >> s;
    ll n = s.size();

    stack<char> st;
    for(ll i = 0; i < n; i++) {
        if(st.empty() || st.top() != s[i]) {
            st.push(s[i]);
        } else {
            st.pop();
        }
    }
    if(st.empty()) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
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