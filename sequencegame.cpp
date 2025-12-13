#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> b(n);
    for(int i = 0; i < n; i++) {
        cin >> b[i];
    }
    vector<int> a;
    // a[0] = b[0];
    a.push_back(b[0]);
    // for(int i = 1; i < n; i++) {
    //     if(a[i-1] <= b[i]) {
    //         a[i] = b[i];
    //     } else if(a[i-1] > b[i]) {
    //         a[i] = 1;
    //         a[i+1] = b[i];
    //     } 
    // }
    for(int i = 1; i < n; i++) {
        int last = a.back();
        if(last <= b[i]) {
            a.push_back(b[i]);
        } else {
            a.push_back(1);
            a.push_back(b[i]);
        }
    }
    cout << a.size() << endl;
    // for(int i = 0; i < n; i++) {
    //     cout << a[i] << " ";
    // }
    for(int num : a) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    int t; 
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}