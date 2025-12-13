#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector <long long> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    long long min_ops = 1e18;
    for(int i = 0; i < n-1; i++) {
        if(a[i] > a[i+1]) {
            min_ops = 0;
            break;
        } else {
            long long diff = a[i+1] - a[i];
            long long ops = (diff / 2) + 1;
            min_ops = min(min_ops, ops);
        }        
    }
    cout << min_ops << endl;
}

int main() {
    int t; 
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}