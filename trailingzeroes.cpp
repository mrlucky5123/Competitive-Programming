#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n;
    cin >> n;
    ll count = 0;
    for (ll i = 5; i <= n; i *= 5)
    {
        count += n / i;
    }
    cout << count << '\n';
    return 0;
}