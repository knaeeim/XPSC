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
        int x, y; 
        cin>>x>>y; 

        int cnt = 0; 

        while( x > 0 || y > 0 ){
            if( y >=  2){
                x-=7; 
                y -=2; 
                cnt++;
            }
            else if(y == 1){
                x -=11; 
                y -=1;
                cnt++;
            }
            else{
                x -=15; 
                cnt++;
            }
        }

        cout << cnt << endl; 
    } 
    return 0; 
}