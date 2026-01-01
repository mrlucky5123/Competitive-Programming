#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    string s;
    cin >> s;
    ll n = s.length();
    ll ans = 0;
    ll left = 0, right = 1, cnt = 0;
    while(left < n && right < n) {
        if(s[left] == 's' && s[right] == 's') {
            left += 2;
            right += 2;
        } else if(s[left] == 's' && s[right] == 'u') {
            left++;
            right++;
            cnt++;
        } else if(s[left] == 'u' && s[right] == 'u') {
            left++;
            right++;
            cnt++;
        } else {
            if(cnt == 2) {
                ans++;
                continue;
            }
            if(cnt&1) {
                ans = (cnt + 1) / 2;
            }else {
                ans = (cnt / 2) + 1;
            }
            cnt = 0;
            left++;
            right++;
        }
    }
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