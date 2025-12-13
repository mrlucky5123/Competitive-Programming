#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int max_count = 0;
    int current_count = 0;
    for(int i = 0; i < n; i++) {
        if(a[i] == 0) {
            current_count++;
        } else if(a[i] == 1) {
            max_count = max(max_count, current_count);
            current_count = 0;
        }
    }
    max_count = max(max_count, current_count);
    cout << max_count << endl;
}

int main() {
    int t; 
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}