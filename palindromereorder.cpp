#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

int main() {
    string s;
    cin >> s;
    ll n = s.size();

    // Count frequency of each character
    vector<ll> freq(26,0);
    for(ll i = 0; i < n; i++) {
        freq[s[i] - 'A']++;
    }
    ll odd_count = 0, odd_idx = -1;
    for(ll i = 0; i < 26; i++) {
        if(freq[i] % 2 != 0) {
            odd_count++;
            odd_idx = i; // storing the index of odd-freq character 
        }
    }
    // not possible situation
    if(odd_count > 1) {
        cout << "NO SOLUTION" << endl;
        return 0;
    }
    //construction of actual string ans
    string ans(n, ' ');
    ll left = 0, right = n - 1;

    for(ll i = 0; i < 26; i++) {
        char c = 'A' + i;
        ll count = freq[i];

        if(count % 2) {
            ans[n/2] = c;
            count--;
        }
        while(count > 0) {
            ans[left++] = c;
            ans[right--] = c;
            count -= 2;
        }
    }
    cout << ans << endl;

    return 0;
}