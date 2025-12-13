#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    long long milliliters_of_drink = k * l;
    long long toasts = milliliters_of_drink / nl;
    long long no_of_slices = c * d;
    long long salt_Required = p / np;
    long long ans = min({toasts, no_of_slices, salt_Required}) / n;
    cout << ans << endl;
    return 0;
}