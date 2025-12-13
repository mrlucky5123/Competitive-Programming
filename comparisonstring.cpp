#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int count = 1;
    int max_length = 1;
    for(int i = 1; i < n; i++) {
        if(s[i] == s[i-1]) {
            count++;
        } else {
            count = 1;
        }
        max_length = max(max_length, count);
    }
    cout << max_length + 1 << endl;
}

int main() {
    long long t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}