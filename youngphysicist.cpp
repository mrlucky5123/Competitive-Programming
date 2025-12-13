#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int SX = 0, SY = 0, SZ = 0;
    for(int i = 0; i < n; i++) {
        int x, y, z;
        cin >> x >> y >> z;
        SX += x;
        SY += y;
        SZ += z;
    }
    if(SX == 0 && SY == 0 && SZ == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}