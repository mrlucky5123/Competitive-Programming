#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    if(n < 8) {
        cout << 0 << endl;
        return;
    }

    vector<int> count(10, 0); // frequency array of digits 0-9
    bool found = false;

    for(int i = 0; i < n ; i++) {
        if(a[i] >= 0 && a[i] <= 9){
            count[a[i]]++;
        }
        if(count[0] >= 3 && count[1] >= 1 && count[2] >= 2 && count[3] >= 1 && count[5] >= 1) {
            cout << i + 1 << endl;
            found = true;
            break;
        }
    }
    if(!found) {
        cout << 0 << endl;
    }
}

int main(){
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}