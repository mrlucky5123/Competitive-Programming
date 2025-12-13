#include<bits/stdc++.h>
using namespace std;

void solve() {
    string s, t;
    cin >> s >> t;
    int n = s.size();
    int m = t.size();

    vector<int> freq_in_t(26, 0);
    for(int i = 0; i < m; i++) {
        freq_in_t[t[i] - 'A']++;
    }

    for(int i = n - 1; i >= 0; i--) {
        if(freq_in_t[s[i] - 'A'] > 0) {
            freq_in_t[s[i] - 'A']--;
        } else {
            s[i] = '.';
        }
    }

    string final_string = "";

    for(int i = 0; i < n; i++) {
        if(s[i] != '.') {
            final_string += s[i];
        }
    }

    if(final_string == t) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main() {
    long long t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}