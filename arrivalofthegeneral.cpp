#include<bits/stdc++.h>
using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int count = 0;
    int max_pos = 0, min_pos = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] > arr[max_pos]){
            max_pos = i;
        }
        if(arr[i] <= arr[min_pos]) {
            min_pos = i;
        }
    }
    count = max_pos + (n - 1 - min_pos);
    if(max_pos < min_pos) {
        cout << count << endl;
    }else {
        cout << count - 1 << endl;
    }
    
    
}