#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s; cin >> s;
    ll n = s.size();
    if(n < 7) {
        cout << "NO" << endl;
        return 0;
    }
    ll max_streak = 1;
    ll curr_streak = 1;
    for(ll i = 1; i < n; i++) {
        if(s[i] == s[i-1]) curr_streak++;
        if(curr_streak > max_streak) {
            max_streak = curr_streak;
        }
        else curr_streak = 1;
    }
    if(max_streak >= 7) {
        cout << "YES" << endl;
        return;
    } else {
        cout << "NO"  << endl;
        return;
    }
    return 0;
}