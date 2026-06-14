#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll d, sumTime; cin >> d >> sumTime;

    vector<pair<ll,ll>> days(d);
    ll minTime = 0, maxTime = 0;
    for(ll i = 0; i < d; i++) {
        cin >> days[i].first >> days[i].second;
        minTime += days[i].first;
        maxTime += days[i].second;
    }

    if(maxTime < sumTime || minTime > sumTime){
        cout << "NO" << endl;
        return;
    }

    ll ans = minTime;
    vector<ll> answer(d);
    for(ll i = 0; i < d; i++) {
        answer[i] = days[i].first;
    }
    ll remainingTime = sumTime - minTime;

    for(ll i = 0; i < d; i++) {
        // ll extraTime = max(0LL, days[i].second - days[i].first);
        ll extraTime = days[i].second - days[i].first;
        ll take = min(extraTime, remainingTime);
        answer[i] += take;
        ans += take;
        remainingTime -= take;
    }
    cout << "YES" << endl;
    for(ll i = 0; i < d; i++) {
        cout << answer[i] << " ";
    }
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t=1;
    // cin >> t;
    while(t--) {
       solve();
    }
    return 0;
}