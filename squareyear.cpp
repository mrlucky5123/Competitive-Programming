#include<bits/stdc++.h>
using namespace std;

void solve() {
    long long n;
    cin >> n;
    long long root = sqrt(n);
    if(sqrt(n) != floor(sqrt(n))) {
        cout << -1 << endl;
        return;
    }
    if(n == 1) {
        cout << 0 << " " << 1 << endl;
        return;
    }
    long long num1, num2 = 0;
    if(root % 2 == 0) {
        num1 = root / 2;
        num2 = root / 2;
    } else { 
        num1 = floor(root*1.0 / 2);
        num2 = ceil(root*1.0 / 2);
    }
    cout << num1 << " " << num2 << endl;

}

int main() {
    long long t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}