#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    string s;
    getline(cin, s);

    set<char> st;
    for(ll i = 0; i < s.size(); i++) {
        if(isalpha(s[i])) {
            st.insert(s[i]);
        } else continue;
    }
    cout << st.size() << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t=1;
    // cin >> t;
    while(t--) {
       solve();
    }
    return 0;
}