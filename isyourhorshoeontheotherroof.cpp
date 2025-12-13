#include<bits/stdc++.h>
using namespace std;

int main() {
    long long s1, s2, s3, s4;
    cin >> s1 >> s2 >> s3 >> s4;

    set<long long> s; // set
    s.insert(s1);
    s.insert(s2);   
    s.insert(s3);
    s.insert(s4);

    long long unique_count = s.size();
    long long ans = 4 - unique_count;

    cout << ans << endl;
    return 0;
}