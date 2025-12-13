#include<bits/stdc++.h>
using namespace std;

void solve() {
    long long n;
    cin >> n;
    vector<long long> a(n);
    
    for(long long i = 0; i < n; i++) {
        a[i] = n - i;
    }
    
    long long sum = 0;
    for(long long i = 0; i < n; i++) {
        sum += abs(a[i] - i);
    }
    
    long long evenCount = 0;
    for(long long i = 0; i <= sum; i++) {
        if(i % 2 == 0) {
            evenCount++;
        }
    }
    
    cout <<  evenCount << endl;
}

int main() {
    long long t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}