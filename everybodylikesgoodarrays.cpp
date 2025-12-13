#include<bits/stdc++.h>
using namespace std;

int getparity(long long x) {
    return x % 2;
}

void solve() {
    int n;
    cin >> n;
    vector<long long> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i] ;
    }

    if(n == 1) {
        cout << 0 << endl;
        return;
    }

    int operations = 0;
    vector<long long> result;
    result.push_back(a[0]);

    for(int i = 1; i < n; i++) {
        int last_parity = getparity(result.back());
        int curr_parity = getparity(a[i]);

        if(last_parity == curr_parity) {
            operations++;
            
        } else {
            result.push_back(a[i]);
        }
    }
    cout << operations << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}