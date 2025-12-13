#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    
    int count_1 = 0, count_0 = 0;
    for(int i = 0; i < n; i++) {
        char c;
        cin >> c;
        if(c == '0') {
            count_0++;
        } else {
            count_1++;
        }
    }
    int up = (n - 2*k) / 2;

    if(count_0 >= up && count_1 >= up && (count_0-up) % 2 == 0 && (count_1-up) % 2 == 0) {
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