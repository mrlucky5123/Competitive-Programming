#include<bits/stdc++.h>
using namespace std;

void solve() {
    long long n;
    cin >> n;
    vector<long long> a(2*n);
    long long odd = 0, even = 0;
    for(long long i = 0; i < 2*n; i++) {
        cin >> a[i];
        if(a[i] % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }

    if(odd == even) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
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