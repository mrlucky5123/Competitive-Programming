#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    string s; cin >> s;
    int n = s.size();
    // cout << n << endl;

    ll sum = 0;
    for(ll i = 0; i < n; i++) {
        sum += (s[i] - '0');
    }
    if(sum < 10) {
        cout << 0 << endl;
        return;
    }

    vector<ll> digits;
    for(ll i = 1; i < n; i++) {
        digits.push_back(s[i] - '0');
    }
    sort(digits.begin(), digits.end(), greater<ll>());

    ll idx = 0;
    ll sum1 = sum;
    ll moves1 = 0;
    while(sum1 >= 10) {
        sum1 -= digits[idx++];
        moves1++;
    }

    ll first_dig = s[0] - '0';
    if(first_dig > 1) {
        ll sum2 = sum - first_dig + 1;
        if(sum2 < 10) {
            cout << 1 << endl;
            return;
        } 

        ll idx2 = 0;
        ll moves2 = 1;
        while(sum2 >= 10) {
            sum2 -= digits[idx2++];
            moves2++;
        }
        cout << min(moves1, moves2) << endl;
    } else {
        cout << moves1 << endl;
    }
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