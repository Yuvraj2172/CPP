// You have been given two integer arrays/lists (ARR1 and ARR2) of size N and M, respectively. You need to print their intersection; An intersection for this problem can be defined when both 
// the arrays/lists contain a particular value or to put it in other words, when there is a common value that exists in both the arrays/lists.

#include<bits/stdc++.h>
void printIntersection(int arr1[], int arr2[], int n, int m) {
    unordered_map<int,int> mp;
    for(int i=0;i<n; i++){
        mp[arr1[i]]++;
    }
    for(int i=0;i<m;i++){
      if (mp[arr2[i]] > 0) {
        mp[arr2[i]]--;
      } else
        mp.erase(arr2[i]);
      if (mp.find(arr2[i]) != mp.end()) {
        cout << arr2[i] << "\n";
        }
    }
}
