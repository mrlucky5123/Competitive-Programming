#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll n; cin >> n;
    string a; cin >> a;
    ll m; cin >> m;
    string b; cin >> b;
    string order; cin >> order;

    string vlad = "";
    string dima = "";

    ll i = 0; 
    while(i < n) {
        if(order[i] == 'D') {
            dima += order[i];
        } else {
            vlad += order[i];
        }
        i++;
    }
    cout << vlad + b + dima << endl;
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