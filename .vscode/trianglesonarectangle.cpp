#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl '\n'

void solve() {
    // // It worked.
    // ll w,h;
    // cin >> w >> h;
    // ll points_face1, points_face2, points_face3, points_face4;

    // cin >> points_face1;
    // vector<ll> face1(points_face1);
    // for(ll i = 0; i < points_face1; i++) {
    //     cin >> face1[i];
    // }
    // cin >> points_face2;
    // vector<ll> face2(points_face2);
    // for(ll i = 0; i < points_face2; i++) {
    //     cin >> face2[i];
    // }
    // cin >> points_face3;
    // vector<ll> face3(points_face3);
    // for(ll i = 0; i < points_face3; i++) {
    //     cin >> face3[i];
    // }
    // cin >> points_face4;
    // vector<ll> face4(points_face4);
    // for(ll i = 0; i < points_face4; i++) {
    //     cin >> face4[i];
    // }

    // ll base1 = abs(face1[0] - face1[points_face1 - 1]);
    // ll base2 = abs(face2[0] - face2[points_face2 - 1]);
    // ll base3 = abs(face3[0] - face3[points_face3 - 1]);
    // ll base4 = abs(face4[0] - face4[points_face4 - 1]);

    // ll max_area1 = max(base1, base2) * h;
    // ll max_area2 = max(base3, base4) * w;

    // cout << max(max_area1, max_area2) << endl;


    // More less same approach but cleaner code
    ll w, h;
    cin >> w >> h;
    ll area = INT_MIN;
    for(ll i = 0; i < 4; i++) {
        ll k;
        cin >> k;
        ll first, last;

        for(ll j = 0; j < k; j++) {
            ll x;
            cin >> x;
            if(j==0) first = x;
            if(j==k-1) last = x;
        }
        ll base = last - first;
        ll height;
        if(i < 2) height = h;
        else height = w;
        area = max(area, base*height);
    }
    cout << area << endl;
}

int main() {
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   long long t;
   cin >> t;
   while(t--) {
       solve();
   }
   return 0;
}