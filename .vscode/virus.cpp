#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll n, m; cin >> n >> m;
    vector<ll> a(m);
    for(auto& i  : a) cin >> i;
    sort(a.begin(), a.end());

    vector<ll> gaps;
    for(ll i = 0; i < m - 1; i++) {
        gaps.push_back(a[i+1] - a[i] - 1);
    }
    gaps.push_back(a[0] + n - a[m-1] - 1);
    sort(gaps.rbegin(), gaps.rend());

    ll saved = 0, numDays = 0;
    for(auto gap : gaps) {
        ll currGap = gap - numDays*2;
        if(currGap > 0) {
            saved++; // left extremity of the current gap

            currGap -= 2;
            if(currGap > 0) saved += currGap; //! protecting the right extremity and all the elements in the range 
            numDays += 2;
        }
    }
    cout << n - saved << endl;
}

// T.C:= O(m log m) S.C:= (m)

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