#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve1() {
    ll x; cin >> x;
    ll a, b; 
    for(ll i = 1; i * i <= x; i++) { // srt(x)
        if(x % i == 0 && (i * (x / i) ) / __gcd(i, x / i) == x) {  //gcd  log2(min(i, x/i)) = 20
            a = i;
            b = x / i;
        }
    }
    cout << a << " " << b << endl;
}

void solve2() {
    ll x; cin >> x;
    ll a, b;
    for(ll d = 1; d*d <= x; d++) {
        if(x % d == 0) {
            ll other = x / d;
            if(__gcd(d, other) == 1) {
                a = d;
                b = other;
            }
        }
    }
    cout << a << " " << b << endl;
}


// T.c :- O(sqt(x) * log2(min(i, x/i))) = O(10^6*20) = O(2*10^7)
// S.C :- O(1)

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t=1;
    // cin >> t;
    while(t--) {
       solve2();
    }
    return 0;
}