#include<bits/stdc++.h>
using namespace std;

void solve() {
    long long n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    string rev = s;
    reverse(rev.begin(), rev.end());

    //universal
    if(s < rev) {
        cout << "YES" << endl;
        return;
    }
    //same character
    bool all_same = true;
    for(int i = 1; i < n; i++) {
        if (s[i] != s[0]) {
            all_same = false;
            break;
        }
    }
    if (all_same) {
        cout << "NO" << endl;
        return;
    }
    
    if(k == 0) {
        cout << "NO" << endl;
        return;
    }

    cout << "YES" << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}

