#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

void solve() {
    ll n;
    cin >> n;

    vector<ll> second_elements;
    ll lowest_first_minimum = INT_MAX;

    for(ll i = 0; i < n; i++) {
        ll m;
        cin >> m;
        vector<ll> a(m);
        for(auto &x : a) cin >> x;

        sort(a.begin(), a.end());

        second_elements.push_back(a[1]);
        lowest_first_minimum = min(lowest_first_minimum, a[0]);
    }

    sort(second_elements.begin(), second_elements.end());
    ll sum_of_second_elements = accumulate(second_elements.begin(), second_elements.end(), 0LL);
    ll lowest_second_minimum = second_elements[0];

    ll ans = lowest_first_minimum + sum_of_second_elements - lowest_second_minimum;
    cout << ans << endl;
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

// tc = O(mlogm) = O(50000*log2(50000)) = O(50000*19) = O(950000) = O(10^6)
// sc = O(m) = O(50000) = O(10^5)