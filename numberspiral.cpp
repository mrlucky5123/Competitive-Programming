#include<bits/stdc++.h>
using namespace std;

void solve() {
    long long x, y;
    cin >> x >> y;

    // spiral number
    long long n = max(x, y);
    // 1 3 5 7 9 
    long long element_count = 1 + (n -1)*2;
    
    long long start = n * n - element_count + 1; 
    long long end = start + element_count - 1;

    if(n % 2 == 0) {
        swap(start,end);
        if(x <= y) {
           cout << end + x - 1 << endl;
        } else {
            cout << start - y + 1 << endl;

        }
    } else {
        if(x <= y) {
           cout << end - x + 1 << endl;
        } else {
            cout << start + y - 1 << endl;
        }
    }
    // if(n % 2 == 0) {
    //     swap(start,end);
    // }

    // if(x >= y) {
    //     if(n % 2 == 0) {
    //         cout << start - y + 1 << endl;
    //     } else {
    //         cout << start + y - 1 << endl;
    //     }
    // } else {
    //     if(n % 2 == 0) {
    //         cout << end + x - 1 << endl;
    //     } else {
    //         cout << end - x + 1 << endl;
    //     }
    // }
}

int main() {
    long long t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}