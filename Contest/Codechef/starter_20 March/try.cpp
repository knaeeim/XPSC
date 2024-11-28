#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t; 
    cin>>t; 
    
    while(t--){
        int n; 
        cin>>n; 
        
        int a[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        
        int sum = 0;
        
        for(int i=1; i<n; i++){
            if(a[i-1] < a[i]){
                sum += a[i-1];
            }
            else{
                sum +=(2*a[i-1]);
                break;
            }
        }
        
        if(n == 2 and a[0] < a[1]){
            sum += (2*a[n-1]);
        }
        
        cout<<sum<<endl;
    }
}


/*

*/
