#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    string x, y;
    cin >> x >> y; 
    reverse(x.begin(), x.end());
    reverse(y.begin(), y.end());

    ll pos_y = -1, pos_x = -1;
    // bool pos_x_found = false, pos_y_found = false;
    // for(ll i = 0; i < max(x.size(), y.size()); i++) {
    //     if(y[i] == '0') continue;
    //     else {
    //         pos_y = i;
    //         pos_y_found = true;
    //     }
    //     for(ll j = i; j < x.size(); j++) {
    //         if(x[j] == '0') continue;
    //         else {
    //             pos_x = j;
    //             pos_x_found = true;
    //             break;
    //         }
    //     }
    //     if(pos_x_found && pos_y_found) {
    //         cout << pos_x - pos_y << endl;
    //         return;
    //     }
    // }
    for(ll i = 0; i < y.size(); i++) {
        if(y[i] == '0') continue;
        else {
            pos_y = i;
            break;
        }
    }
    for(ll i = pos_y; i < x.size(); i++) {
        if(x[i] == '0') continue;
        else {
            pos_x = i;
            break;
        }
    }
    cout << pos_x - pos_y << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin >> t;
    while(t--) {
       solve();
    }
    return 0;
}