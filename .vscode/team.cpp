#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl '\n' 

int main() {
    ll n;
    cin >> n;
    ll count;
    while(n > 0) {
        ll a, b, c;
        
        cin >> a >> b >> c;
        if (a+b+c >= 2) {
            count++;
        }
        n--;
    }
    cout << count << endl;

    return 0;
}