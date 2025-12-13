#include<bits/stdc++.h>
using namespace std;

bool twoSum(int arr[], int n, int target) {
  int left = 0, right = n -1; // two pointers
  
  while(left < right) {
    int sum = arr[left] + arr[right];
    
    if(sum == target) {
      cout << "Pair found : (" << arr[left] << ", " << arr[right] << ")"<< endl;
      return true;
    } else if (sum < target) {
      left++;
    } else {
      right++;
    }
  }
  cout << "No pair found. " << endl;
  return false;
}

int main() {
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  int n = sizeof(arr) / sizeof(arr[0]);
  int target = 12;
  
  twoSum(arr, n, target);
  return 0;
}