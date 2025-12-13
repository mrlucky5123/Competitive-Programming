#include<bits/stdc++.h>
using namespace std;


// that means all the numbers from 1 to i - 1divide N 
// i can take LCM fo all numbers from 1 to i - 1

void solve() {

    // long long a = 1;
    // for(long long i = 2; i <= 50; i++) {
    //     a = lcm(a,i);
    // }
    // cout << a << endl;

    long long n;
    cin >> n;

    long long i = 1;
    while(n % i == 0) {
        i++;
    }
    cout << i - 1 << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}

// tc = O(60) == o(log2(n))
// sc = O(1)