#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    int worst_record = 0, best_record = 0;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    worst_record = a[0], best_record = a[0];
    int amazing_count = 0;
    for(int i = 1; i < n; i++) {
        if(a[i] > best_record) {
            best_record = a[i];
            amazing_count++;
        } else if(a[i] < worst_record ) {
            worst_record= a[i];
            amazing_count++;
        }
    }

    cout << amazing_count << endl;
    return 0;
}

