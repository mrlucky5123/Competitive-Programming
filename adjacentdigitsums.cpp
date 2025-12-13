#include<bits/stdc++.h>
using namespace std;

void solve(){
    int x, y;
    cin >> x;
    cin >> y;

    if(x + 1 >= y && (x + 1 - y) % 9 ==0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    } 
}

int main(){
    int t;
    cin >> t;
    while (t--){
        solve();
    }
}