#include<bits/stdc++.h>
using namespace std;

void solve() {
    long long n;
    cin >> n;
    long long count = 0;
    
    for(int digit = 1; digit <= 9; digit++) {
        long long num = digit;

        while(num <= n) {
            count++;
            if(num > LLONG_MAX / 10) {
                break;
            }
            num *= 10;
        }
    }
    
    cout << count << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}