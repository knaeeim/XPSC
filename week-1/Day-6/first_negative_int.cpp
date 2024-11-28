#include <bits/stdc++.h>
using namespace std; 

vector<long long> printFirstNegativeInteger(long long int a[], long long int n, long long int k) {
    
    queue<long long> q;
    
    int i=0; int j=0;
    
    vector <long long> ans;

    while(j<n){
        if(a[j] < 0 ) q.push(a[j]);
        if(j - i + 1 == k){
            if(!q.empty()){
                ans.push_back(q.front());
                if(a[i] == q.front()) q.pop();
                i++; 
            }
            else {
                ans.push_back(0);
                i++;
            }
            j++; 
        }
        else j++;
    }
    
    return ans; 
 }