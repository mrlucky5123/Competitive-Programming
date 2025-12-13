#include<bits/stdc++.h>
using namespace std;

bool isBeautiful(const vector<int> &arr) {
    long long sum = 0;
    for(int i = 0; i < arr.size(); i++) {
        if(i > 0 && arr[i] == sum) {
            return false;
        }
        sum += arr[i];
    }
    return true;
}

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i <n; i++) {
        cin >> a[i];
    }
    if(isBeautiful(a)) {
        cout << "YES" << endl;
        for(int num : a) {
            cout << num << " ";
        }
        cout << endl;
        return;
    }

    bool allSame = true;
    for(int i = 1; i < n; i++) {
        if(a[i] != a[0]) {
            allSame = false;
            break;
        }
    }

    if(allSame) {
        cout << "NO" << endl;
        return;
    }

    vector<int> reordered;
    deque<int> dq(a.begin(), a.end());
    bool takeFront = true;
    while(!dq.empty()) {
        if(takeFront) {
            reordered.push_back(dq.front());
            dq.pop_front();
        } else {
            reordered.push_back(dq.back());
            dq.pop_back();
        }
        takeFront = !takeFront;
    }

    if(isBeautiful(reordered)) {
        cout << "YES" << endl;
        for(int num : reordered){
            cout << num << " ";
        }
        cout << endl;
    } else {
        sort(a.rbegin(), a.rend());
        if(isBeautiful(a)) {
            cout << "YES" << endl;
            for(int num : a) {
                cout << num << " ";
            }
            cout << endl;
        } else {
            cout << "NO" << endl;
        }
    } 
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}