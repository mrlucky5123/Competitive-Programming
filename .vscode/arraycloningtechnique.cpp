#include<bits/stdc++.h>
using namespace std;

void solve() {
    long long n;
    cin >> n;
    vector<long long> a(n);
    
    bool same = true;
    for(long long i = 0; i < n; i++) {
        cin >> a[i];
    }
    for(long long i = 1; i < n; i++) {
        if(a[i] != a[0]){
            same = false;
            break;
        }
    }
    ;
    if(n < 2 || same) {
        cout << 0 << endl;
        return;
    }
    if(n == 2) {
        cout << 2 << endl;
        return;
    }
    unordered_map<long long, long long> freq;
    for(long long x : a) {
        freq[x]++;
    }
    long long highest_count = 0;
    for(auto& pair : freq) {
        highest_count = max(highest_count, pair.second);
    }

    long long operations = 0;
    while(highest_count < n) {
        operations++;
        if(highest_count * 2 <= n) {
            operations+= highest_count;
            highest_count *= 2;
        } else {
            operations += n - highest_count;
            highest_count = n;
        }
    }

    cout << operations << endl;
}

int main() {
    long long t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}