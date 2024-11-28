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

        string s; cin>>s; 

        int i  = 0, cnt1s = 0, cnt2s = 0;

        while( i < n){

            if(s[i] == '1'){
                while(s[i] == s[i+1]){
                    i++;
                }
                i++; 
                cnt1s++;
            }
            else if(s[i] == '0'){
                while(s[i] == s[i+1]){
                    i++;
                }
                i++;
                cnt2s++;
            }
        } 

        cout << min(cnt1s, cnt2s) << endl; 
    }
    return 0; 
}