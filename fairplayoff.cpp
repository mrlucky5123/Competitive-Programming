#include<bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t;
    while(t--) {
        long long s1, s2, s3, s4;
        cin >> s1 >> s2 >> s3 >> s4;
        vector<long long> a;
        a.push_back(s1);
        a.push_back(s2);
        a.push_back(s3);
        a.push_back(s4);

        sort(a.begin(), a.end());
        long long winner1, winner2;
        winner1 = max(s1, s2);
        winner2 = max(s3, s4);

        if((a[3] == winner1 && a[2] == winner2) || (a[3] == winner2 && a[2] == winner1))   {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}