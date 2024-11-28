#include <bits/stdc++.h>
using namespace std; 

class Solution{   
public:
    long maximumSumSubarray(int k, vector<int> &a , int n){
        // code here 
       int r = 0, l =0; 
       long long sum =0, ans = 0; 
       
       while(r < n){
           sum +=a[r]; 
           
           if(r-l+1 == k){
               ans = max(ans, sum);
               sum -=a[l]; 
               l++;
               r++;
           }
           else {
               r++;
           }
       }
       
       return ans; 
    }
};