// #include<bits/stdc++.h>
// using namespace std;

// void solve() {
//     long long n;
//     cin >> n;
//     vector<long long> d(n);
//     for(long long i = 0; i < n; i++) {
//         cin >> d[i];
//     }
//     vector<pair<long, long>> obstacles(n);
//     for(long long i = 0; i < n; i++) {
//         cin >> obstacles[i].first >> obstacles[i].second;
//     }

//     long long min_height = 0, max_height = 0;
//     bool feasible = true;

//     for(long long i = 0; i < n; i++) {
//         if(d[i] == 1) {
//             min_height += 1;
//             max_height += 1;
//         } else if(d[i] == -1) {
//             max_height += 1; //unknown could be 1 or 0
//         }

//         if(min_height > obstacles[i].second || max_height < obstacles[i].first) {
//             feasible = false;
//             break;
//         }
//     }

//     if(!feasible) {
//         cout << -1 << endl;
//         return;
//     }

//     vector<long long> result = d;
//     long long height = 0;
//     feasible = true;

//     for(long long i = 0; i < n; i++) {
//         long long li = obstacles[i].first;
//         long long ri = obstacles[i].second;

//         if(result[i] == -1) {
//             if(li <= height + 1 && height + 1 <= ri) {
//                 result[i] = 1;
//                 height += 1;
//             } else if (li <= height && height <= ri) {
//                 result[i] = 0;
//             } else {
//                 feasible = false;
//                 break;
//             }
//         } else {
//             height += result[i];
//             if(height < li || height > ri) {
//                 feasible = false;
//                 break;
//             }
//         }
//     }
//     if(feasible) {
//         for(long long i = 0; i < n; i++) {
//             cout << result[i] << " ";
//         }
//         cout << endl;
//     } else {
//         cout << -1 << endl;
//     }
// }

// int main() {
//     long long t;
//     cin >> t;
//     while(t--) {
//         solve();
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n;
    cin >> n;
    vector<long long> d(n);
    for (long long i = 0; i < n; i++) {
        cin >> d[i];
    }
    vector<pair<long long, long long>> obstacles(n);
    for (long long i = 0; i < n; i++) {
        cin >> obstacles[i].first >> obstacles[i].second;
    }

    long long min_height = 0, max_height = 0;
    bool feasible = true;

    for (long long i = 0; i < n; i++) {
        if (d[i] == 1) {
            min_height += 1;
            max_height += 1;
        } else if (d[i] == -1) {
            max_height += 1;
        }

        if (min_height > obstacles[i].second || max_height < obstacles[i].first) {
            feasible = false;
            break;
        }
        min_height = max(min_height, obstacles[i].first);
        max_height = min(max_height, obstacles[i].second);
        if (min_height > max_height) {
            feasible = false;
            break;
        }
    }

    if (!feasible) {
        cout << -1 << endl;
        return;
    }

    vector<long long> result = d;
    long long height = 0;
    stack<long long> unknowns;

    for (long long i = 0; i < n; i++) {
        long long li = obstacles[i].first;
        long long ri = obstacles[i].second;

        if (result[i] == -1) {
            result[i] = 0;
            unknowns.push(i);
        } else {
            height += result[i];
        }

        while (height < li) {
            if (unknowns.empty()) {
                cout << -1 << endl;
                return;
            }
            long long idx = unknowns.top();
            unknowns.pop();
            result[idx] = 1;
            height += 1;
        }

        if (height > ri) {
            cout << -1 << endl;
            return;
        }
    }

    for (long long i = 0; i < n; i++) {
        cout << result[i] << " ";
    }
    cout << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
