#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    vector<long long> a(n);
    for (long long i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    if (n == 1)
    {
        cout << 0 << endl;
        return 0;
    }
    long long count = 0;
    for (long long i = 1; i < n; i++)
    {
        if (a[i] < a[i - 1])
        {
            long long diff = a[i - 1] - a[i];
            count += diff;
            a[i] = a[i - 1];
        }
        else if (a[i] >= a[i + 1])
        {
            continue;
        }
    }
    cout << count << endl;
    return 0;
}