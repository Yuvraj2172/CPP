// Given k different arrays, which are sorted individually (in ascending order). You need to merge all the given arrays such that output array should be sorted (in ascending order).
// Hint : Use Heaps.
#include<bits/stdc++.h>
vector<int> mergeKSortedArrays(vector<vector<int>*> input) {
    priority_queue<int , vector<int>, greater<int>> pq;
    for(int i=0;i<input.size();i++){
        for(int j=0;j<input[i]->size();j++){
            pq.push(input[i]->at(j) );
        }
    }
    vector<int> ans;
    while(!pq.empty()){
        ans.push_back(pq.top());
        pq.pop();
    }
    return ans;
}