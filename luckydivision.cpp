#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll n; cin >> n;
    vector<ll> lucky_numbers = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};
    
    bool lucky = false;
    for(auto& num : lucky_numbers) {
        if(n % num == 0) {
            lucky = true;
            break;
        }
    }
    if(lucky) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t = 1;
    // cin >> t;
    while(t--) {
       solve();
    }
    return 0;
}