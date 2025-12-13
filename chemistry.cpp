#include<bits/stdc++.h>
using namespace std;

bool canformpalindrome(long long n, long long k,const string &s) {
    vector<long long> freq(26, 0);
    for(char c : s) {
        freq[c - 'a']++;
    }
    
    long long odd_counts = 0;
    for(long long count : freq) {
        if(count % 2 != 0) {
            odd_counts++;
        }
    }

    long long m = n - k;
    if(m < 1) {
        return false;
    }
    long long required_odd = m % 2;
    return (odd_counts - k <= required_odd) && (required_odd <= odd_counts + k);
}

void solve() {
    long long n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    if(canformpalindrome(n, k, s)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
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