#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    long long k = 1;
    while (k < n + 1)
    {
        long long total_pairs = (k * k * (k * k - 1)) / 2;
        long long attacking_pairs = 4 * (k - 2) * (k - 1);
        long long ans = total_pairs - attacking_pairs;
        cout << ans << endl;
        k++;
    }
    return 0;
}