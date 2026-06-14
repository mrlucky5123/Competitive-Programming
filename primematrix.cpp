#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

const ll N = 2e5;
vector<bool> isprime(N+1, true);
vector<ll> nextprime(N+2);

void buildsieve() {
    isprime[0]=isprime[1]= false;
    for(ll i = 2; i*i <= N; i++) {
        if(isprime[i]) {
            for(ll j = i*i; j <= N; j+=i) {
                isprime[j]=false;
            }
        }
    }

    nextprime[N+1] = N+1; 

    for(ll i = N; i >= 1; i--) {
        if(isprime[i]) nextprime[i] = i;
        else nextprime[i] = nextprime[i+1];
    }
}


void solve() {
    ll n, m; cin >> n >> m;

    vector<vector<ll>> grid(n, vector<ll>(m));
    for(ll i = 0; i < n; i++) {
        for(ll j = 0; j < m; j++) {
            cin >> grid[i][j];
        }
    }

    ll ans = LLONG_MAX;

    // check rows
    for(ll i = 0; i < n; i++) {
        ll cost = 0;
        for(ll j = 0; j < m; j++) {
            cost += (nextprime[grid[i][j]] - grid[i][j]);
        }
        ans = min(cost, ans);
    }
    // check columns 
    for(ll j = 0; i < m; j++) {
        ll cost = 0;
        for(ll i = 0; i < n; i++) {
            cost += (nextprime[grid[i][j]] - grid[i][j]);
        }
        ans = min(cost, ans);
    }
    cout << ans << endl;

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    buildsieve();
    long long t=1;
    // cin >> t;
    while(t--) {
       solve();
    }
    return 0;
}