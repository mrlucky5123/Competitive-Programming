#include<bits/stdc++.h>
using namespace std;

void solve() {
    long long x, y, a;
    cin >> x >> y >> a;

    // while (curr_depth <= target) {
    //     curr_depth = curr_depth + x;
    //     if(curr_depth > target) {
    //         cout << "NO" << endl;
    //         return;
    //     }
    //     curr_depth = curr_depth + y;
    //     if(curr_depth > target) {
    //         cout << "YES" << endl;
    //         return;
    //     }
    // }
    long long cycle = x + y;
    long long n = a / cycle;
    long long depth = n * cycle;

    if(depth >= a) {
        if(depth + x > a) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
    if(depth + x > a) {
        cout << "NO" << endl;
        return;
    }
    if(depth + cycle > a) {
        cout << "YES" << endl;
        return;
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