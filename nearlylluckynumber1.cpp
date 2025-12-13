#include<bits/stdc++.h>
#define ll long long 
#define endl '\n'
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    ll lucky_count = 0;
    for(ll i = 0; i < s.size(); i++) {
        if(s[i] == '4' || s[i] == '7') lucky_count++;
    }
    if(lucky_count == 4 || lucky_count == 7) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}