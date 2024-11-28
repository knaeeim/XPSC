#include<bits/stdc++.h>
using namespace std;
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define endl "\n"
#define ll long long int
#define pub push_back
#define pob pop_back
#define puf push_front
#define pof pop_front
#define vi vector<int>
#define vll vector<ll>
#define vp vector<pair<ll,ll>>
#define sorta(arr) sort(arr.begin(), arr.end());
#define sortd(arr) sort(arr.begin(), arr.end(), greater<int>());
#define All(X) (X).begin(),(X).end()
#define Unique(X) (X).erase(unique((X).begin(),(X).end()),(X).end())
#define range(arr) for(auto el: arr) cout<<el<<" ";


int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(NULL); 
    

    int t; cin>>t; 

    while(t--){
        int n; cin>>n; 

        vll v(n); 

        ll sum = 0; 

        for(int i=0; i<n; i++) {
            cin>>v[i];
            sum += v[i];
        }

        if(n==1) no; 
        else{
            bool flag = false;

            for(int i=0; i<n; i++){
                if(sum < 1){
                    flag = true;
                    break;
                }
                
                if(v[i] == 1){
                    if(sum >= 2 ){
                        sum -=2;
                    }
                    else{
                        flag = true; 
                        break; 
                    }
                }
                else{
                    if(sum >= 1 ){
                        sum -=1;
                    }
                    else{
                        flag = true; 
                        break; 
                    }
                } 
            }

            if(flag) no;
            else yes;
        }
        
    }
    return 0; 
}