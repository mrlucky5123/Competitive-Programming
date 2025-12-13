#include<bits/stdc++.h>
using namespace std;

void solve() {
    long long n;
    cin >> n;
    vector<long long> a(n);
    for(long long i = 0; i < n; i++) {
        cin >> a[i];
    }

    for(long long i = 0; i < n; i++) {
        if(a[i] == 1){
            a[i]++;
        }
    }

    for(long long i = 0; i < n - 1; i++) {
        if(a[i + 1] % a[i] == 0) {
            a[i + 1]++;
        }
    }

    for(long long i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main() {
    long long t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}